---
title: "Generative Design Skateboard Truck Hanger + Motor Mount"
excerpt: "A generative design study to create a lightweight skateboard truck hanger with an integrated motor mount, optimized for structural performance under realistic riding loads."
header:
  image: /assets/img/RENDER_IMAGE_HERE.jpg
  teaser: /assets/img/TEASER_IMAGE_HERE.jpg
gallery:
  - image_path: /assets/img/IMAGE1.jpg
  - image_path: /assets/img/IMAGE2.jpg
  - image_path: /assets/img/IMAGE3.jpg
---

---

# Purpose:

This project explores the use of generative design to create a lightweight and structurally efficient skateboard truck hanger with an integrated motor mount.

The goal was to minimize mass, maintain structural integrity under realistic riding conditions, and to integrate the motor mount into a single optimized component.

Overall, the task was to make a generative design connecting the pivot point, axles, and motor mount while avoiding key components and using as little material as possible while keeping the truck as strong as possible.

Generative design was used to explore how material can be distributed efficiently based on applied loads and constraints, rather than relying on traditional design intuition.

---

# What is Generative Design?

Generative design is a computational design process where constraints, loads, and design requirements are defined, and the software generates optimized geometries based on those conditions.

Instead of designing the geometry directly, the designer defines where material must exist (preserve geometry), where material cannot exist (obstacle geometry), and how the part is loaded and constrained.  

The result is a structure that follows natural load paths, often producing organic and highly efficient forms.

---

# Design Setup:

### Preserve Geometry

The following regions were preserved to maintain functional requirements and assembly compatibility:

- Axle ends (wheel bearing interfaces)
- Pivot interface  
- Motor mount  
- Kingpin cutout region  

These features were required to remain unchanged so the hanger could properly assemble with the rest of the skateboard system.

---

### Obstacle Geometry

Obstacle geometry was used to ensure proper clearances for moving parts and assembly:

- Motor body (Flipsky motor)  
- Pulley and belt region (geometry sketched and extruded covering the pulley system)
- Kingpin shaft clearance  
- Bushings  
- Pivot cup clearance 
- Wheels
- Baseplate
- Clearances for assembly tools by motor mount (geometries sketched and extruded in front of motor mount holes)
- Clearances around axles
- Clearance around motor edge closest to mount

These regions prevented generative design from creating geometry that would interfere with motion or assembly.

---

### Structural Constraints

To simulate how the hanger is supported in real use, fixed constraints were applied to:

- Pivot interface region  
- Motor mount

These constraints represent how forces are transferred from the hanger into the skateboard deck.

---

# Loads:

A total of seven loading conditions were applied to simulate realistic riding scenarios.

### Applied Forces

- Vertical load (rider weight):  
    
    600 N applied to each axle ends the downward direction

- Lateral load (carving):  
  
    1200 N applied at axle ends in the lateral direction

- Motor drive torque:  
  
    8000 Nmm applied at motor shaft in belt direction

- Braking load (reverse motor):  
  
    800 N applied opposite motor direction

- Impact load (bump force):

    500 N applied at each axle at a 0 degrees angle

- Shear load (carving):
  
    1200 N applied at each axle, one in the forward direction and the other in the backward direction

- Motor mount torque
  
    9000 Nmm applied in the direction of the motor mount, perpendicular to the pulley system

Each force was chosen to represent a realistic physical scenario, including rider weight, turning, propulsion, braking, and terrain impact. Notice how some of these forces, for example, the weight of the rider, are on the high end. I purposely used very high loads to simulate more extreme riding conditions to ensure that the truck could withstand the weight of most riders and some intense wipeouts, as well.

---

# Forces at a Glance:

| Force Name | Magnitude | Location | Rationale |
|-----------|----------|----------|----------|
| Vertical Load (Rider Weight) | 600 N (each axle) | Axle ends (downward) | Simulates the rider’s weight transferred through the wheels into the hanger |
| Lateral Load (Carving) | 1200 N | Axle ends (lateral direction) | Represents forces during aggressive turning and carving |
| Motor Drive Torque | 8000 N·mm | Motor shaft | Models torque transmitted from the motor through the belt to drive the wheel |
| Braking Load | 800 N | Motor shaft (opposite belt direction) | Simulates reverse loading from regenerative braking |
| Impact Load (Bump) | 500 N (each axle) | Axle ends (0° direction) | Represents sudden forces from hitting bumps or cracks in terrain |
| Shear Load (Carving) | 1200 N (each axle, opposite directions) | Axle ends (forward/backward directions) | Simulates shear forces during dynamic carving where wheels experience opposing directional loads |
| Motor Mount Torque | 9000 N·mm | Motor mount region (perpendicular to pulley system) | Represents additional torsional loading on the motor mount during operation |

---

# Materials + Generative Study:

Two materials were used in the generative design study:

- AlSi10Mg Aluminum  
- 17-4 PH Stainless Steel  

The objective was to minimize mass while maintaining a safety factor of at least 2.

The manufacturing setting was left as unrestricted, allowing the algorithm full freedom to explore optimal geometries.

---

# Results:

### Aluminum (AlSi10Mg)

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b602811d836c8ad8365bbf7?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

### Stainless Steel (17-4 PH)

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b602811d6ca7f3fe206ad94?mode=embed" width="640" height="480" allowfullscreen="true" frameborder="0"></iframe>

---

### Observations

- Notice the extreme difference in extra material on the aluminum model vs the slim nature of the stainless steel 
- Aluminum builds around the preserved geometries, while steel remains flat around preserved regions
- The aluminum model's mass is 1.104 kg, while the stainless steel weighs 0.442 kg. Naturally, the steel is the preferred choice to manufacture.
- Although the aluminum is so heavy, it can withstand the gnarliest of wipeouts. This model allows for more rigorous riding and is more forgiving. The steel, while sleek, appealing, and allowing for easy carving and movement, its lack of stiffness means that riders must exhibit precaution when riding.

---

# Final Assembly Rendering:

<figure>
  <img src="/assets/img/render_new.jpg" alt="Final Longboard Assembly">
  <figcaption>Generative design hanger integrated into full longboard system</figcaption>
</figure>

---

# Physical Prototype:

<figure>
  <img src="/assets/img/PRINTED_MODEL.jpg" alt="Printed Model">
  <figcaption>Nylon 12 printed prototype for fit and assembly validation</figcaption>
</figure>

<figure>
  <img src="/assets/img/INSTALLED_MODEL.jpg" alt="Installed Model">
  <figcaption>Prototype installed on longboard deck</figcaption>
</figure>

---

# Motion Verification:

### Turning Clearance

**INSERT GIF HERE**

### Motor + Belt Motion

**INSERT GIF HERE**

---

# Discussion:

### Generative Design + Powder Bed Fusion

Generative design pairs naturally with powder bed fusion because both enable the creation of complex geometries that would be difficult or impossible to manufacture using traditional methods.

**INSERT EXAMPLE FROM AEROSPACE OR AUTOMOTIVE WITH LINK**

This combination allows:
- Reduced part count  
- Weight savings  
- Improved structural efficiency  

---

### Importance of Load Cases

The accuracy of generative design outcomes depends heavily on the applied loads.

In this project:
- Loads were chosen based on **realistic riding scenarios**  
- Different conditions such as turning, braking, and impact were considered  

**Explain how you determined your final forces and what you changed**

---

### Material Comparison

- **AlSi10Mg:**  
  **Describe behavior (lighter, more material needed, etc.)**

- **17-4 PH Stainless Steel:**  
  **Describe behavior (stronger, denser, more compact geometry)**  

Discuss how material properties influenced:
- Load paths  
- Thickness of members  
- Overall mass  

---

### Critique of Generative Design

Generative design is powerful, but it has limitations:

- Highly dependent on correct inputs  
- Can produce impractical or hard-to-manufacture features  
- Requires careful setup of constraints and obstacles  

However, it is especially useful in:
- Aerospace  
- Automotive  
- Lightweight structural applications  

---

# Final Thoughts:

This project demonstrated how important setup is in generative design. Small changes in obstacle geometry, constraints, and loads significantly impacted the resulting designs.

While the software generates the geometry, the quality of the result depends entirely on how well the problem is defined.

---

{% include gallery caption="Generative Design Skateboard Truck Project" %}
