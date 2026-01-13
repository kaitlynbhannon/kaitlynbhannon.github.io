

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

  computeSpeed();


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

  }
}

/*
 Stepper Motor Control - speed control

 This program drives a unipolar or bipolar stepper motor.
 The motor is attached to digital pins 8 - 11 of the Arduino.
 A potentiometer is connected to analog input 0.

 The motor will rotate in a clockwise direction. The higher the potentiometer value,
 the faster the motor speed. Because setSpeed() sets the delay between steps,
 you may notice the motor is less responsive to changes in the sensor value at
 low speeds.

 Created 30 Nov. 2009
 Modified 28 Oct 2010
 by Tom Igoe

 */

#include <Stepper.h>

const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution
// for your motor


// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

int stepCount = 0;  // number of steps the motor has taken
