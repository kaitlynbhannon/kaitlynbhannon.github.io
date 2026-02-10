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

# The Design Process:

The iterative design process often involved changing print settings and even starting from scratch multiple times. While this can be (and it really was) frustrating, I learned more with each print.

<section class="The Design Process">
  <h2>Design Iterations</h2>

  <figure class="iteration">
    <img src="/assets/img/Pliers-it1.jpg" alt="Trial 1">
    <figcaption>
      <strong>Iteration 1</strong><br>
      First iteration. The concept was on the right track, but the range of motion was too limited.
      Next step: scale up the design to improve movement.
    </figcaption>
  </figure>
  <img src="/assets/img/Pliers-it2.jpg" alt="Trial 2">
    <figcaption>
      <strong>Iteration 2</strong><br>
      Woah. Way too big, and they still don't move. The infill was lowered too much. Let's go back to that first design.
    </figcaption>
  </figure>
  <img src="/assets/img/Pliers-it3.jpg" alt="Trial 3">
    <figcaption>
      <strong>Iteration 3</strong><br>
      Better and cleaner, but there's no dovetails. Parts are too loose.
    </figcaption>
  </figure>
  <img src="/assets/img/Pliers-it4.jpg" alt="Trial 4">
    <figcaption>
      <strong>Iteration 4</strong><br>
      Even better, and material switch to PETG. They're kind of uncomfortable to hold. There has to be a better way.
    </figcaption>
  </figure>
  <img src="/assets/img/Pliers-finalit.jpg" alt="Final Design">
    <figcaption>
      <strong>Final Iteration</strong><br>
      Boom. Finger holds. And a fun color in PLA. Good stuff.
    </figcaption>
  </figure>

# Features:

* The pliers feature an open design, made with an offset on Fusion, allowing the user to have freedom in their grip. This also makes for a very lightweight design.
* The TPU center has made with an 18% infill and a grid pattern with the top and bottom solid layers removed. The removal of these layers allows for optimal flexibility, while the lessened infill also increases the range of motion of the tool.
* The plier features some grooves and ridges, simply for aesthetic purposes and because they remind me of the ocean.

# Print Settings

<table>
  <thead>
    <tr>
      <th>Setting</th>
      <th>Reason</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>PETG & PLA Material Selection</td>
      <td>Stronger and more durable, suitable for the rigid plier components</td>
    </tr>
    <tr>
      <td>TPU 95A Material Selection</td>
      <td>Flexible yet durable, suitable for the middle section of the pliers</td>
    </tr>
    <tr>
      <td>18 % Infill (TPU)</td>
      <td>Lowering the infill allows for a bigger range of motion when the TPU component is compressed</td>
    </tr>
    <tr>
      <td>Grid Pattern</td>
      <td>Due to the orientation of the TPU square, the printed grid lines will be compressed in their weakest direction (weakest shear strength), meaning it will be easier to open and close the pliers when assembled</td>
    </tr>
    <tr>
      <td>0 Top and Bottom Layer Height</td>
      <td>In order to allow for a flexible, compressive, bend that allowed the TPU grid to move as intended, the top and bottom layers of the print were removed, leaving the grid exposed.</td>
    </tr>
    <tr>
    </tr>
  </tbody>
</table>

* Print settings not mentioned in this table were standard and unchanged, for example, PETG components were printed at their default settings on the Voron printer.

# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/g/shares/SH90d2dQT28d5b602811280f6cf9bb82d83fmode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# A Note on Print-in-Place:

Print-in-place design plays a key role in this needle nose pliers project by allowing mechanical functionality to be achieved through material selection and geometry rather than traditional hardware. By pairing rigid printed handles with a flexible TPU spring element, the pliers automatically return to an open position without the need for metal springs, fasteners, or tools. This reduces part count, simplifies assembly, and improves alignment between components.

This approach is especially relevant to biomedical engineering and prosthetics, my field of interest, where devices often require lightweight, low-cost, and customizable mechanisms that can safely interact with delicate components. Print-in-place and compliant mechanisms enable smooth, repeatable motion while minimizing complexity—an important consideration for assistive devices, prosthetic tools, and biomedical instruments. The pliers serve as a simplified example of how combining rigid and flexible materials can create functional, user-friendly mechanisms through additive manufacturing.

Check out some real-life applications of print-in-place here:

  [Hinges](https://www.youtube.com/watch?v=BWsUk1xSSn4)

  [Door Stop](https://www.printables.com/model/750734-doorstop-multimaterial-door-stopper-multi-material)

  [Integrated Wheel and Tire (8:58)](https://www.youtube.com/watch?v=-i3SdKnfhgc)

The combination of a flexible material for the joint and rigid material for the handles and front pieces has proven to be a strong pairing for effective, yet durable pliers.
