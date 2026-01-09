---
title: "Syringe Pump"
excerpt: "DIY syringe pump capable of 1 microliter per minute flow rate up to 10 milliliters per minute"
header:
  image: /assets/img/LF3DP-Banner-2.jpg
  teaser: /assets/img/Large-Format-3D-Printer-Thumbnail.png
gallery:
  - image_path: assets/img/Slide-3.png
  - image_path: assets/img/Slide-2.png
  - image_path: assets/img/Slide-4.png
   
---
---

# Features

* **Syringe pump using a motor-driven linear actuator to deliver fluid at a controlled flow rate for a specified duration. The system is constructed on an aluminum linear extrusion frame with custom 3D-printed components, including a carriage. When activated, the motor rotates a lead screw, which drives a coupler and translates the carriage linearly. This motion advances the syringe plunger, enabling precise and repeatable fluid dispensing.
* **LED light indicates when the system is in motion (green), idle (yellow), and empty (red). A limit switch is embedded in a custom 3D printed component. This switch is pressed when the carriage reaches the end of its track, indicating that the syringe is out of liquid.
* **On/off switch allows the system to start and stop with just the push of a button.

# Off-the-Shelf Parts

<table>
  <thead>
    <tr>
      <th>Component</th>
      <th>Category</th>
      <th>Description</th>
      <th>Manufacturer</th>
      <th>Part Number</th>
      <th>Quantity</th>
      <th>Purpose in System</th>
      <th>Link</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Stepper Motor</td>
      <td>Actuator</td>
      <td>NEMA 17 bipolar stepper motor</td>
      <td>Pololu</td>
      <td>42STH48-1684A</td>
      <td>1</td>
      <td>Drives lead screw to advance syringe plunger</td>
      <td><a href="#">Product Page</a></td>
    </tr>
    <tr>
      <td>Lead Screw</td>
      <td>Mechanical</td>
      <td>8 mm diameter, 2 mm pitch lead screw</td>
      <td>Misumi</td>
      <td>LS8-300</td>
      <td>1</td>
      <td>Converts motor rotation into linear motion</td>
      <td><a href="#">Product Page</a></td>
    </tr>
    <tr>
      <td>Linear Rail</td>
      <td>Structural</td>
      <td>MGN12 linear guide rail with carriage</td>
      <td>Hiwin</td>
      <td>MGN12H-400</td>
      <td>1</td>
      <td>Guides and supports moving syringe carriage</td>
      <td><a href="#">Product Page</a></td>
    </tr>
    <tr>
      <td>Motor Driver</td>
      <td>Electronics</td>
      <td>Stepper motor driver module</td>
      <td>Texas Instruments</td>
      <td>DRV8825</td>
      <td>1</td>
      <td>Controls motor current and microstepping</td>
      <td><a href="#">Product Page</a></td>
    </tr>
    <tr>
      <td>Power Supply</td>
      <td>Electronics</td>
      <td>12V DC regulated power supply</td>
      <td>Mean Well</td>
      <td>GST60A12</td>
      <td>1</td>
      <td>Provides power to motor and controller</td>
      <td><a href="#">Product Page</a></td>
    </tr>
  </tbody>
</table>


* **Syringe pump using a motor-driven linear actuator to deliver fluid at a controlled flow rate for a specified duration. The system is constructed on an aluminum linear extrusion frame with custom 3D-printed components, including a carriage. When activated, the motor rotates a lead screw, which drives a coupler and translates the carriage linearly. This motion advances the syringe plunger, enabling precise and repeatable fluid dispensing.
* **LED light indicates when the system is in motion (green), idle (yellow), and empty (red). A limit switch is embedded in a custom 3D printed component. This switch is pressed when the carriage reaches the end of its track, indicating that the syringe is out of liquid.
* **On/off switch allows the system to start and stop with just the push of a button.
# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b6028116dd7178f878972dd?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>


{% include gallery caption="Syringe Pump Gallery" %}
