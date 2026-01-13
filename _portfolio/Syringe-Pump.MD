---
title: "Syringe Pump"
excerpt: "DIY syringe pump capable of 1 microliter per minute flow rate up to 10 milliliters per minute"
header:
  image: /assets/img/SP-Carriage.jpg
  teaser: /assets/img/SP-Body.png
gallery:
  - image_path: assets/img/SP-Wiring.png
  - image_path: assets/img/SP-Component.png
  - image_path: assets/img/SP-Drawing.png
   
---
---

# Features

* Syringe pump uses a motor-driven linear actuator to deliver fluid at a controlled flow rate for a specified duration. The system is constructed on an aluminum linear extrusion frame with custom 3D-printed components, including a carriage. When activated, the motor rotates a lead screw, which drives a coupler and translates the carriage linearly. This motion advances the syringe plunger, enabling precise and repeatable fluid dispensing.
* LED light indicates when the system is in motion (green), idle (yellow), and empty (red). A limit switch is embedded in a custom 3D printed component. This switch is pressed when the carriage reaches the end of its track, indicating that the syringe is out of liquid.
* On/off switch allows the system to start and stop with just the push of a button.

# Off-the-Shelf Parts

<table>
  <thead>
    <tr>
      <th>Component</th>
      <th>Description</th>
      <th>Quantity</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Tapered Heat-Set Inserts for Plastic</td>
      <td>Allow threading into plastic for secure screwed in connections</td>
      <td>4</td>
    </tr>
    <tr>
      <td>Arduino Uno</td>
      <td>Connecting the code to the mechanical components, moving the motor</td>
      <td>1</td>
    </tr>
    <tr>
      <td>400 Pin Breadboard</td>
      <td>Wiring connections</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Mean Well RT-65D</td>
      <td>RQ-65D AC-DC Power Supply Quad Output 5V 12V 24V 12V 4 Amp</td>
      <td>1</td>
    </tr>
    <tr>
      <td>20 mL Syringe</td>
      <td>Holds and dispenses fluid</td>
      <td>1</td>
    </tr>
    <tr>
      <td>10 mL Syringe</td>
      <td>Holds and dispenses fluid</td>
      <td>1</td>
    </tr>
    <tr>
      <td>250 mm Lead Screw</td>
      <td>2 mm pitch and 2 mm lead, allows carriage to move along its length</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Latching Button</td>
      <td>Panel Mount Latching Push Button, for turning system on and off</td>
      <td>1</td>
    </tr>
    <tr>
      <td>RBG Common Cathode LED</td>
      <td>Indicates when system is empty (red), idle (yellow), and in motion (green)</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Limit Switch</td>
      <td>When pressed, LED turns red indicating the syringe is empty</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Flexible Coupling</td>
      <td>1/4" x 8 mm, attaches lead screw to motor</td>
      <td>1</td>
    </tr>
    <tr>
      <td>200 mm Linear Rod</td>
      <td>Supports the bottom of the carriage</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Linear Bearing</td>
      <td>LM8UU for 8 mm diameter rod</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Aluminum Extrusion</td>
      <td>All components are attached to and operate along the length of the extrusion</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Nema 17 Stepper Motor</td>
      <td>Allows rotational motion</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Stepper Driver</td>
      <td>Allows microstepping in the motor</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Flanged Ball Bearing</td>
      <td>F688ZZ</td>
      <td>2</td>
    </tr>
    <tr>
      <td>Lock Collar: Lead Screw</td>
      <td>Lock collar placed over the lead screw to hold components in proper position</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Lock collar: Linear Rod</td>
      <td>Lock collar placed over linear rod to hold components in proper position</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Brass Nut</td>
      <td>8x8 - 4, secures lead screw to carriage</td>
      <td>1</td>
    </tr>
    <tr>
      <td>M5 Tee Nut</td>
      <td>Secure 3D printed components to extrusion</td>
      <td>6</td>
    </tr>
    <tr>
      <td>M5 8 mm Bolt</td>
      <td>Secure 3D printed components to extrusion</td>
      <td>6</td>
    </tr>
    <tr>
      <td>M3 10 mm Bolt</td>
      <td>Secure motor mounting plate</td>
      <td>4</td>
    </tr>
    <tr>
      <td>M3 Thread-Forming Screw</td>
      <td>Secure brass nut and enclosure</td>
      <td>8</td>
    </tr>
    <tr>
    </tr>
  </tbody>
</table>

# Custom Components

<table>
  <thead>
    <tr>
      <th>Component</th>
      <th>Description</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Enclosure</td>
      <td>Holds and hides power supply, wiring, and arduino underneath the linear actuator</td>
    </tr>
    <tr>
      <td>Enclosure Lid</td>
      <td>Secures enclosure, separating linear actuator</td>
    </tr>
    <tr>
      <td>Enclosure</td>
      <td>Holds and hides power supply, wiring, and arduino underneath the linear actuator</td>
    </tr>
    <tr>
      <td>Carriage</td>
      <td>Is built to fit the syringe plunger in order to move it across the extrusion on the lead screw</td>
    </tr>
    <tr>
      <td>End Support</td>
      <td>Holds the limit switch in its side so the carriage presses in when the plunger is fully compressed</td>
    </tr>
    <tr>
      <td>Motor Mounting Plate</td>
      <td>Secures motor at appropriate height and orientation to connect to lead screw</td>
    </tr>
    <tr>
    </tr>
    <tr>
    </tr>
  </tbody>
</table>


# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b6028116dd7178f878972dd?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>


{% include gallery caption="Syringe Pump Gallery" %}
