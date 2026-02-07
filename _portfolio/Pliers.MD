---
title: "Multi-Material Pliers"
excerpt: "Pliers 3D printed using flexible TPU in the middle to allow full range of motion and functionality."
header:
  image: /assets/img/SP-Body.png
  teaser: /assets/img/SP-Carriage.png
gallery:
  - image_path: assets/img/multimaterial3dprinting.jpg
  - image_path: assets/img/SP-Component.png
  - image_path: assets/img/SP-Drawing.png
   
---
---
# Purpose:

Pliers will be used to pick up individual through-hole resistors.
Due to the flexible TPU in the middle of the tool, pliers return to their open state after compression.

# A Note on Print-in-Place:

Print-in-place design plays a key role in this needle nose pliers project by allowing mechanical functionality to be achieved through material selection and geometry rather than traditional hardware. By pairing rigid printed handles with a flexible TPU spring element, the pliers automatically return to an open position without the need for metal springs, fasteners, or tools. This reduces part count, simplifies assembly, and improves alignment between components.

This approach is especially relevant to biomedical engineering and prosthetics, my field of interest, where devices often require lightweight, low-cost, and customizable mechanisms that can safely interact with delicate components. Print-in-place and compliant mechanisms enable smooth, repeatable motion while minimizing complexity—an important consideration for assistive devices, prosthetic tools, and biomedical instruments. The pliers serve as a simplified example of how combining rigid and flexible materials can create functional, user-friendly mechanisms through additive manufacturing.

Check out some real-life applications of print-in-place here:

  [Hinges](https://www.youtube.com/watch?v=BWsUk1xSSn4)

  [Door Stop](https://www.printables.com/model/750734-doorstop-multimaterial-door-stopper-multi-material)

  [Integrated Wheel and Tire (8:58)](https://www.youtube.com/watch?v=-i3SdKnfhgc)

The combination of a flexible material for the joint and rigid material for the handles and front pieces has proven to be a strong pairing for effective, yet durable pliers.

# Features:

* The pliers feature an open design, made with an offset on Fusion, allowing the user to have freedom in their grip. This also makes for a very lightweight design.
* The TPU center has made with an 18% infill and a grid pattern with the top and bottom solid layers removed. The removal of these layers allows for optimal flexibility, while the lessened infill also increases the range of motion of the tool.
* The plier features some grooves and ridges, simply for aesthetic purposes and because they remind me of the ocean.

# How it Works:

  Fill a standard syringe with the desired liquid and place it into the syringe holder. Secure the syringe so that the plunger is aligned with the     moving carriage.

  Turn on the power supply and ensure the Arduino and motor driver are energized. The LED will indicate that the system is in an idle state.

  Using the Arduino code, input the desired flow rate and duration for dispensing. These values determine how fast and how long the syringe            plunger will advance.

  Press the on/off button to begin operation. The motor will rotate the lead screw, moving the carriage forward and pushing the syringe plunger to     dispense liquid at the programmed rate. The LED will turn green while the system is running.

  The pump will continue dispensing until the programmed time is reached or until the syringe becomes empty. If the carriage reaches the end of        its travel, the limit switch will be triggered and the LED will turn red, indicating that the syringe is empty.

  Press the on/off button at any time to stop the pump. Replace or refill the syringe as needed before restarting.

# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b6028116dd7178f878972dd?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Firmware

[Download Arduino Control](/arduino-code/SP2-Code.ino)


[View Arduino Firmware](https://github.com/kaitlynbhannon/kaitlynbhannon.github.io/blob/main/arduino-code/SP2-Code.ino)
