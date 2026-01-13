#include <AccelStepper.h>

// ======================================================
// USER-SET GLOBAL VARIABLES
// ======================================================
float flowRate_mL_min = 1.0;       // mL/min (adjustable)
float syringeDiameter_mm = 14.5;   // diameter of syringe

// ======================================================
// HARDWARE CONSTANTS
// ======================================================
const float lead_screw_lead_mm = 8.0;  // using 8 mm lead screw
const int stepsPerRev = 200;           // NEMA17
const int microstep = 16;              // A4988 set to 1/16
const float stepsPerMM = (stepsPerRev * microstep) / lead_screw_lead_mm;

// ======================================================
// PIN ASSIGNMENTS
// (updated so STEP pin is NOT 2)
// ======================================================
const int STEP_PIN = 3;
const int DIR_PIN  = 4;
const int EN_PIN   = 5;

const int BUTTON_PIN = 7;   // Latching switch (ON/OFF)
const int LIMIT_PIN  = 8;   // Normally CLOSED limit switch

// RGB LED (common cathode)
const int LED_R = 9;
const int LED_G = 10;
const int LED_B = 11;

// ======================================================
// STATE VARIABLES
// ======================================================
bool running = false;     // pump running?
bool emptyState = false;  // limit switch triggered?

float mm_per_min;
float steps_per_sec;

// Stepper object
AccelStepper stepper(AccelStepper::DRIVER, STEP_PIN, DIR_PIN);

// ------------------------------------------------------
// LED helper
// ------------------------------------------------------
void setLED(bool r, bool g, bool b) {
  digitalWrite(LED_R, r ? HIGH : LOW);
  digitalWrite(LED_G, g ? HIGH : LOW);
  digitalWrite(LED_B, b ? HIGH : LOW);
}

// ------------------------------------------------------
// Compute steps/sec based on syringe + flow rate
// ------------------------------------------------------
void computeSpeed() {
  float radius_mm = syringeDiameter_mm / 2.0;
  float area_mm2 = 3.14159 * radius_mm * radius_mm;

  mm_per_min = (flowRate_mL_min * 1000.0) / area_mm2;
  steps_per_sec = (mm_per_min / 60.0) * stepsPerMM;
}

// ======================================================
// SETUP
// ======================================================
void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LIMIT_PIN, INPUT_PULLUP);

  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);

  pinMode(EN_PIN, OUTPUT);
  digitalWrite(EN_PIN, LOW);   // Enable driver

  stepper.setMaxSpeed(1000);
  computeSpeed();
  stepper.setSpeed(steps_per_sec);

  // Start LED as GREEN
  setLED(false, true, false);
}

// ======================================================
// MAIN LOOP
// ======================================================
void loop() {

  // -------------------------------
  // Limit switch check
  // -------------------------------
  if (digitalRead(LIMIT_PIN) == LOW) {
    emptyState = true;
    running = false;
    setLED(true, false, false);   // RED
  }

  // -------------------------------
  // Latching ON/OFF button
  // -------------------------------
  if (digitalRead(BUTTON_PIN) == LOW) {
    delay(200); // simple debounce
    running = !running;

    // Reset emptyState when turned back on
    if (running) {
      emptyState = false;
      setLED(false, true, false);  // back to GREEN
    }
  }

  // -------------------------------
  // LED state rules
  // -------------------------------
  if (emptyState) {
    setLED(true, false, false);  // red
  }
  else if (running) {
    setLED(false, true, false);  // green
  }
  else {
    setLED(true, true, false);   // yellow
  }

  // -------------------------------
  // MOTOR RUN
  // -------------------------------
  if (running && !emptyState) {
    stepper.runSpeed();
  }
}
