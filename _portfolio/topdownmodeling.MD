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

This project was to design and 3D print a **bike phone mount** that:
* Attaches securely to handlebars  
* Holds different phone sizes  
* Rotates between portrait and landscape  
* Locks into place with a detent mechanism  

The entire design was created using a **top-down modeling approach**.

---

# What is Top-Down Modeling?

Top-down modeling is a design approach where you build all parts **in the same assembly**, using shared references (like position, size, and spacing) so everything fits together from the start.

Instead of designing parts separately and hoping they fit later, you:
* Start with key components (like handlebars + phone)
* Design everything **in place**
* Make parts update automatically if something changes

For this project, it helped me:
* Find the best distance between the **handlebar and phone screen**
* Make sure all parts fit and moved together correctly
* Avoid printing parts that don’t align or assemble properly

---

# Design Rationale:

* I designed parts to **slide into each other** → cleaner prints and easier assembly  
* Used a **clamp collar** because I’ve used it before and it works well  
  * Can tighten for stability  
  * Loosen slightly for rotation around the handlebar  
* Combined the **phone clamp + detent mechanism into one part**  
  * Makes it easy to grab and rotate the phone  
  * Feels intuitive, especially while riding  
* Made the phone clasp **2 mm smaller than the phone**  
  * Uses tension to hold the phone  
  * Eliminates need for extra supports  
  * Leaves space for chargers or attachments  

---

# Detent Mechanism:

The detent mechanism allows the phone to “click” into portrait or landscape.

* Uses a **spring + pin/ball system**
* Engages with set positions when rotated
* Provides:
  * Tactile feedback (click feeling)
  * Prevents unwanted rotation during riding  

---

# Design Changes / Iteration:

* Increased depth of **spring pocket** (originally too shallow)
* Increased diameter of **heat insert holes**
* Adjusted tolerances for smoother movement

---

# Printing Choices:

* Used **filament printing (FDM)**
* Material: **TPU**

Why TPU:
* Flexible → prevents clamp from cracking  
* Easier support removal  
* Better for compression in clamp design  

PLA/ABS would have been:
* Too rigid  
* More likely to fail under tightening  

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

<iframe src="PASTE_FUSION_360_LINK_HERE" width="640" height="480" allowfullscreen="true" frameborder="0"></iframe>

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
  <img src="/assets/img/bike-render.jpg" alt="Fusion render of phone mount">
  <figcaption>
    <strong>Fusion Render with Phone</strong>
  </figcaption>
</figure>

---

# Cross Section (Internal Mechanism):

<figure>
  <img src="/assets/img/bike-cross-section.jpg" alt="Cross section of detent mechanism">
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
