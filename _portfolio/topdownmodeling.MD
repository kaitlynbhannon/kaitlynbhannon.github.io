---
title: "Top-Down Modeling Bike Phone Mount"
excerpt: "A 3D printed bike phone mount designed using a top-down modeling approach with a rotating detent mechanism."
header:
  image: /assets/img/bike-main.jpg
  teaser: /assets/img/bike-cad.png
gallery:
  - image_path: /assets/img/bike-real.jpg
  - image_path: /assets/img/bike-components.jpg
  - image_path: /assets/img/bike-render.jpg
---

---

# Purpose:

I designed and 3D printed a bike phone mount that:

* Attaches securely to handlebars  
* Holds different phone sizes  
* Rotates between portrait and landscape  
* Locks into place with a detent mechanism  

The entire design was created using a top-down modeling approach.

---

# What is Top-Down Modeling?

Top-down modeling is a design approach where all parts are built in the same assembly using shared references (like position, size, and spacing) so everything fits together from the start.

Instead of designing parts separately and hoping they fit later, with top-down, I was able to start with key components (like handlebars + phone), design everything in place, and make parts update automatically if something changes.

For this project, it helped me find the best distance between the handlebar and phone screen, make sure all parts fit and moved together correctly, and avoid printing parts that didn't align or assemble properly.

---

# Design Rationale:

I designed parts to slide into each other with the rationale that cleaner prints will allow for easier assembly. I used a clamp collar design to go around the handle bar. I used the same approach in a wheelchair attachment project a few years ago and it worked well. The clamp can tan tighten for stability and loosen slightly for rotation around the handlebar.   

I combined the phone clamp + detent mechanism into one part. This makes it easy to grab and rotate the phone, which feels intuitive, especially while riding.  

I also made the phone clasp 2 mm smaller than the phone. It uses tension to hold the phone, eliminating the need for extra supports and leaving space for chargers or attachments.  

---

# Detent Mechanism:

The detent mechanism allows the phone to “click” into portrait or landscape orientation.

* Uses a spring + pin/ball system
* Engages with set positions when rotated
* Provides tactile feedback (click feeling)
* Prevents unwanted rotation during riding  

---

# Design Changes / Iteration:

* Increased depth of spring pocket (originally too shallow)
* Increased diameter of heat insert holes, as I originally underestimated the diameter
* Adjusted tolerances for smoother movement

---

# Printing Choices:

* Used filament printing (FDM)
* Material: TPU

Why TPU:
* Flexible, prevents clamp from cracking  
* Easier support removal  
* Better for compression in clamp collar design

PLA/ABS would have been too rigid and most likely would've cracked when the clamp collar was tightened. 

---

# Assembly Instructions:

* Attach clamp:
  * Place collar around handlebar  
  * Insert screw + bolt  
  * Tighten to desired stiffness  

* Attach phone mount:
  * Slide into the flat slot on clamp piece  
  * Press until secure  

* Insert phone:
  * Stretch clasps around phone  
  * Tension holds it in place  

* Rotate phone:
  * Turn clockwise or counterclockwise  
  * Detent locks into position  

---

# CAD Model:

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b60281154996812b1fcbe5a?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

---

# Real Device (Mounted):

<figure>
  <img src="/assets/img/bike-real.jpg" alt="Bike phone mount on handlebars">
  <figcaption>
    <strong>Final Device on Handlebars</strong>
  </figcaption>
</figure>

---

# Rotation GIF:

<figure>
  <img src="/assets/img/bike-rotation.gif" alt="Phone rotating between orientations">
  <figcaption>
    <strong>Detent Mechanism in Action</strong><br>
    Rotation between portrait and landscape
  </figcaption>
</figure>

---

# CAD Render:

<figure>
  <img src="/assets/img/topdownrendering.png" alt="Fusion render of phone mount">
  <figcaption>
    <strong>Fusion Render with Phone</strong>
  </figcaption>
</figure>

---

# Cross Section (Internal Mechanism):

<figure>
  <img src="/assets/img/crosssection.png" alt="Cross section of detent mechanism">
  <figcaption>
    <strong>Internal Detent Mechanism</strong><br>
    Shows spring and locking geometry
  </figcaption>
</figure>

---

# Components (Top-Down Parts):

<figure>
  <img src="/assets/img/bike-components.jpg" alt="Individual components">
  <figcaption>
    <strong>Individual Components</strong><br>
    Modeled in-place using top-down approach
  </figcaption>
</figure>

---

# Why Top-Down Modeling Was Important:

* Ensured all components were aligned from the start  
* Made rotation and motion easier to design  
* Reduced iteration time  
* Allowed quick adjustments using parametric dimensions  

---

# Final Thoughts:

Top-down modeling made this project much more efficient. Instead of guessing how parts would fit, everything was designed together from the start.

This approach worked especially well for a project like this where:
* Parts interact closely  
* Movement matters  
* Fit is critical  

Overall, the design is simple, functional, and easy to use while riding.

---

{% include gallery caption="Bike Phone Mount Project Gallery" %}
