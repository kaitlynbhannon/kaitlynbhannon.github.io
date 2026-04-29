---
title: "3D Printed Pickleball Paddle"
excerpt: "A modular pickleball paddle with a PLA face, TPU handle, and snap-on edge guard designed for performance and durability."
header:
  image: /assets/img/mona_kk_paddles.jpg
  teaser: /assets/img/paddle_front.jpg
gallery:
  - image_path: /assets/img/paddle_front.jpg
  - image_path: /assets/img/handle1.jpg
  - image_path: /assets/img/handle2.jpg
---

---

# Purpose:

I designed and 3D printed a pickleball paddle that:

* Meets 2026 USA Pickleball rule requirements  
* Survives real gameplay conditions  
* Improves grip and comfort using TPU  
* Protects the paddle with an interchangeable edge guard  
* Optimizes weight and balance for performance  

The paddle was designed as a modular system, with the face and handle printed separately and assembled together.

---

# Design Overview:

The paddle face was printed in blue PLA to provide a rigid, non-compressible hitting surface. A gap was intentionally designed in the lower portion of the paddle to reduce air resistance and slightly decrease weight for improved maneuverability.

The handle was printed in black TPU at 12% infill. It includes an internal gap to improve grip, flexibility, and comfort during gameplay. This allows slight deformation when held, making it feel more natural in hand.

The handle connects to the paddle using a snap-fit joint that was modeled to exactly match the paddle geometry. This results in a very tight and accurate fit, but under high swing forces, it may pose a risk if the connection loses tension.

<figure>
  <img src="/assets/img/paddle_front.jpg">
  <figcaption>
    <strong>Exploded View of Paddle Components</strong>
  </figcaption>
</figure>

---

# Rule Compliance:

The paddle was designed to follow the 2026 USA Pickleball Equipment Standards:

* Total combined length and width under 24 inches  
* Paddle length under 17 inches  
* Rigid, non-compressible face material (PLA)  
* Smooth surface with no texture to prevent excessive spin  

The flat printed surface ensures no illegal roughness or spin-enhancing features are introduced.

---

# TPU Handle (Grip Enhancement):

The handle uses TPU to improve grip and comfort.

* Printed at 12% infill for flexibility  
* Internal gap allows compression and ergonomic grip  
* Reduces hand fatigue during extended gameplay  

This design prioritizes comfort while maintaining enough structural integrity for control.

<figure>
  <img src="/assets/img/handle1.jpg" alt="TPU handle">
  <figcaption>
    <strong>TPU Handle with Internal Gap</strong>
  </figcaption>
</figure>

---

# Edge Guard (Interchangeable Protection):

The paddle includes a snap-on TPU edge guard designed to protect the paddle face.

* Absorbs impact when hitting the ground  
* Easily removable and replaceable  
* Flexible material prevents cracking  

One limitation observed is that TPU stretches over time, causing the guard to loosen. In a future iteration, I would slightly reduce the dimensions to improve long-term fit.

---

# Weight & Mass Balance:

The paddle was designed to fall within the midweight range (7.3–8.3 oz) to balance power and control.

* PLA face provides stability and hitting power  
* TPU handle reduces weight and shifts balance toward the grip  
* Aerodynamic gap reduces unnecessary mass  

This results in improved maneuverability while still maintaining effective shot power.

---

# Printing Strategy:

Due to the 300 x 300 mm build plate limitation of the Voron printers, the paddle was printed in two parts:

* Paddle face (PLA)  
* Handle + edge guard (TPU)  

Instead of using bolts or inserts, a snap-fit connection was used for assembly, simplifying the build process.

---

# Assembly:

* Attach handle:
  * Align snap-fit joint with paddle base  
  * Press firmly until fully seated
  * The TPU expands to fit around the base of the blue paddle
  * DISCLAIMER: This is NOT a safe attachment for real gameplay, only for the aesthetics of the design. The paddle face can still fly out of the handle resulting in serious injury to your opponent. Do with that information what you will.

* Attach edge guard:
  * Stretch TPU guard around paddle edge  
  * Snap into place  

# CAD Model
<iframe src="<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b602811d41c0b96d816594c?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

---

# Design Challenges & Iteration:

* TPU edge guard became loose over time due to material stretching  
* Snap-fit connection may not withstand very high swing forces  
* Tolerances could be refined for longer-term durability  

If redesigned:

* Reduce edge guard dimensions for tighter fit  
* Consider hybrid attachment (snap-fit + mechanical fastener)  
* Reinforce handle connection for safety  

---

# Final Thoughts:

This project successfully demonstrates how additive manufacturing can be used to create a functional sports device that meets real-world constraints.

The combination of PLA and TPU allowed for a balance between rigidity and comfort, while modular design made the paddle adaptable and easy to assemble.

While there are areas for improvement, the paddle is lightweight, functional, and capable of withstanding gameplay.

---

{% include gallery caption="Pickleball Paddle Project Gallery" %}
