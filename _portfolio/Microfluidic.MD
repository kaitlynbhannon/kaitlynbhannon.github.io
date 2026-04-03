---
title: "Microfluidic Pinch Flow Fractionation Device"
excerpt: "A resin-printed mold and PDMS microfluidic device designed to separate two particle size ranges using pinch flow fractionation."
header:
  image: /assets/img/microfluidic-hero.jpg
  teaser: /assets/img/microfluidic-cad-overview.png
gallery:
  - image_path: /assets/img/microfluidic-sketch.jpg
  - image_path: /assets/img/microfluidic-mold.jpg
  - image_path: /assets/img/microfluidic-casted-device.jpg
  - image_path: /assets/img/microfluidic-testing-setup.jpg
  - image_path: /assets/img/microfluidic-plasma-treatment.jpg
---
---

# Introduction:

This project focused on designing a **pinch flow fractionation (PFF)** microfluidic device that can separate particles into different outlet streams based on particle size. The mold was designed in CAD, intended for **SLA resin printing**, and then used to cast a **PDMS** microfluidic chip that would later be bonded to glass for testing.

Pinch flow fractionation works by bringing a particle-containing stream and a buffer stream together into a narrow **pinched section**. In this narrow region, larger particles cannot approach the wall as closely as smaller particles due to their diameter, so they become laterally displaced relative to smaller particles. Once the flow expands into a broader section, those lateral offsets are preserved as separate streamlines, allowing the particles to be collected in different outlets.

A major benefit of PFF over traditional filtration is that it sorts particles **continuously without requiring a physical pore barrier**, which reduces clogging and allows gentler handling of suspended particles. This is especially useful in biomedical and microfluidic applications where particle integrity and reliable flow are important. A foundational primary literature reference for this method is the original PFF paper by Yamada et al.:  
[Pinched Flow Fractionation: Continuous Size Separation of Particles Utilizing a Laminar Flow Profile in a Pinched Microchannel](https://pubs.acs.org/doi/10.1021/ac049863r)

One application of this type of separation is in **cell or bead sorting**, where particles of different diameters must be separated without mechanical sieving. In biomedical engineering, similar strategies can be used for sample preparation, diagnostics, and pre-processing of particle suspensions before analysis.

# Purpose:

The purpose of this device was to create a **three-outlet pinch flow fractionation chip** capable of separating two particle size ranges:

* **Small particles:** 125–150 μm
* **Large particles:** 425–500 μm

The design uses a **symmetric-style PFF inlet layout** leading into a narrow pinched region, followed by a broad expansion and **three distinct outlet paths**:

* **Top outlet:** small particle stream
* **Middle outlet:** large particle stream
* **Bottom outlet:** buffer stream

The main design challenge was not just separating the streamlines, but also making sure the outlet channels had a geometry that helped **balance flow resistance**, so the correct fraction of fluid would naturally enter each outlet.

# Design Strategy:

## Symmetric vs. Asymmetric Approach

For this project, I used a **standard/symmetric pinch flow fractionation approach** rather than an asymmetric PFF design. The assignment notes that the original PFF geometry is the most straightforward to implement, while asymmetric methods require more aggressive control of outlet flow fractions and can be more difficult to troubleshoot. Since this device also needed to be manufacturable as a resin-printed mold for PDMS casting, I prioritized a simpler and more robust baseline geometry.

## Pinched Section and Streamline Placement

The outlet boundaries were based on the pinch flow relationship provided in the assignment:

\[
Y_0 = \left(w_p - \frac{D}{2}\right)\frac{w_b}{w_p}
\]

Where:

* \(w_p\) = width of the pinched section  
* \(w_b\) = width of the broad section  
* \(D\) = particle diameter  

For my design:

* **Pinched width, \(w_p\)** = **0.65 mm**
* **Broad section width, \(w_b\)** = **5 mm**
* **Small particle diameter used for design** = **125 μm = 0.125 mm**
* **Large particle diameter used for design** = **500 μm = 0.5 mm**

Using those values, the calculated streamline positions were:

* **Small particle boundary:** **Y₀ = 4.52 mm**
* **Large particle boundary:** **Y₀ = 3.08 mm**

These values were used to define the approximate outlet boundaries in the broad region after expansion.

## Outlet Regions

Based on the calculated boundaries and the layout shown in the design sketch, the three outlet paths from **top to bottom** were assigned as:

1. **Small particles (top path)**  
   * Channel width: **0.5 mm**

2. **Large particles (middle path)**  
   * Channel width: **1.4 mm**

3. **Buffer region (bottom path)**  
   * Channel width: **3.0 mm**

The small-particle streamline sits highest in the broad section, the large-particle streamline occupies the middle region, and the buffer layer carries the largest volume of fluid along the bottom. This matches the expected laminar ordering after the flow exits the pinched section.

## Flow Balancing / Outlet Resistance

One of the biggest challenges in pinch flow fractionation is that the **buffer stream is much thicker** than the particle streams, so it needs to carry a much larger fraction of the total flow. However, because all outlets still need to interface with similar barb connections, simply making the buffer outlet dramatically larger is not always practical.

To address this, I used a **three-outlet design** and intentionally built in **different hydraulic resistances**:

* The **buffer outlet** was kept comparatively **wider and more direct** so it would naturally accept the largest fraction of flow.
* The **small particle outlet** and **large particle outlet** were made **narrower and more tortuous**, increasing their resistance.
* The **small-particle path** was given the narrowest outlet width (**0.5 mm**) because that stream occupies the smallest fraction of the broad section.
* The **large-particle path** was made wider than the small-particle path (**1.4 mm**) but still more restrictive than the buffer outlet.

This was my attempt to make the pressure drop in each branch better match the fraction of fluid each branch is supposed to carry.

## CAD Changes from the Ideal Sketch

The whiteboard sketch represents what my **final CAD model was supposed to look like conceptually**, especially in terms of the pinch width, broad section width, streamline boundaries, and outlet ordering. However, I made a few practical edits when translating that idea into CAD:

* I adjusted the **port and barb spacing** slightly to make sure **none of the barbs would overlap or become obstructed**, while still respecting the required spacing constraints.
* I made the **tortuous outlet paths slightly more tortuous** than the original sketch in order to better tune hydraulic resistance in the particle outlets.
* I also refined some curves and transitions to reduce sharp corners and dead-volume regions that could encourage bubble trapping.

So while the final CAD still follows the intended design logic from the sketch, it was modified to be more realistic for fabrication, tubing access, and flow control.

# Critical Dimensions:

Below are the key dimensions used in the design based on the assignment constraints and my calculations:

* **Overall device footprint:** **75 mm × 50 mm**
* **Broad section width, \(w_b\):** **5 mm**
* **Broad section length:** **15 mm minimum** (used to satisfy assignment guidance)
* **Pinched section width, \(w_p\):** **0.65 mm**
* **Pinched section selected to be:**  
  * 1.3 × 0.5 mm = 0.65 mm  
  (based on the largest 500 μm particle)
* **Small particle boundary:** **Y₀ = 4.52 mm**
* **Large particle boundary:** **Y₀ = 3.08 mm**
* **Outlet widths (top to bottom):**
  * **0.5 mm** (small particles)
  * **1.4 mm** (large particles)
  * **3.0 mm** (buffer)
* **Inlet/outlet post diameter:** **2.2 mm**
* **Minimum spacing between channels/features:** **≥ 1 mm**
* **Minimum edge clearance:** **≥ 3 mm**
* **Minimum port spacing:** **≥ 11 mm center-to-center**

# Design Sketch / Channel Layout:

<section class="design sketch">
  <h2>Design Sketch</h2>

  <figure class="sketch">
    <img src="/assets/img/microfluidic-sketch.jpg" alt="Hand sketch or whiteboard sketch of the pinch flow fractionation device">
    <figcaption>
      <strong>Initial Layout and Critical Dimensions</strong><br>
      This sketch shows the intended pinch region, broad section, and three outlet branches. The top outlet collects small particles, the middle outlet collects large particles, and the bottom outlet collects the buffer stream.
    </figcaption>
  </figure>
</section>

# CAD Model:

This CAD model was built around the assignment’s fixed mold footprint (**75 mm × 50 mm**) and the resin-printing constraints for PDMS casting. Since the molded device must bond cleanly to glass, channel spacing, edge clearance, and port spacing were all chosen to reduce leaks, obstruction, and demolding issues.

<iframe src="https://your-fusion-or-autodesk-embed-link-here" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true" frameborder="0"></iframe>

# Mold + Fabrication Notes:

This project was specifically designed for **resin printing a mold**, not directly printing the fluidic chip itself. In this process, the **solid features in the mold become the void channels in PDMS after casting**, so the CAD model had to be built “in reverse” compared to the final fluid path.

Resin printing was chosen because it offers much better feature resolution and surface finish than most filament-based printing methods. For microfluidic channels, this is important because rough surfaces, poor dimensional accuracy, or warped parts can make bonding unreliable and create unpredictable flow behavior.

The mold also had to account for the class requirements:

* Flat molding surface for clean glass bonding
* 2.2 mm posts for barb-compatible inlet/outlet holes
* No undercuts or trapped internal mold features
* Adequate spacing between all channels and ports
* Avoiding tall, fragile features that could break during printing or demolding

# Most Important Fabrication Steps:

## Resin Printing + PDMS Casting Workflow

The most important steps for creating this microfluidic device with resin printing were:

1. **Design the mold in CAD**
   * Build the mold as a negative of the final channel geometry.
   * Keep the overall footprint fixed at **75 mm × 50 mm**.
   * Respect edge clearance, port spacing, and minimum feature spacing.

2. **Prepare the resin print correctly**
   * Orient the mold so the **bottom face (the future bonding face)** remains as flat as possible.
   * Use a layer thickness appropriate for the smallest critical features.
   * Avoid support placement that could damage functional channel features.

3. **Wash the print thoroughly**
   * Wash on the build plate first, then off the plate.
   * Do not over-wash, since excessive IPA exposure can affect the resin.

4. **Dry and inspect the mold**
   * Let IPA drain out fully.
   * Ensure the internal mold surfaces have a consistent sheen and no uncured resin remains.

5. **Lightly cure the mold**
   * Cure only enough to stabilize the print without causing warping.
   * Avoid over-curing since flatness is important for sealing.

6. **Remove supports carefully**
   * Avoid damaging or scratching the internal mold features.

7. **Cast PDMS**
   * Mix **SYLGARD™ 184** at **10:1 base-to-curing-agent ratio**.
   * Pour over the mold and degas if possible.

8. **Cure the PDMS**
   * Use a temperature/time combination that avoids warping the mold while fully curing the PDMS.

9. **Demold and punch/inspect ports**
   * Carefully remove the PDMS from the mold.
   * Inspect channels for tears, residue, or trapped defects.

10. **Plasma treat and bond to glass**
   * Plasma treat the PDMS and slide.
   * Align carefully and avoid collapsing shallow channels during bonding.

# Testing Setup:

<section class="testing setup">
  <h2>Testing Setup</h2>

  <figure class="testing">
    <img src="/assets/img/microfluidic-testing-setup.jpg" alt="Testing setup with syringe pumps, tubing, and microfluidic device">
    <figcaption>
      <strong>Device Testing Setup</strong><br>
      The device was designed to be tested using independent syringe pumps for the particle stream and the pinch-flow buffer stream, with tubing connected to each outlet collection branch.
    </figcaption>
  </figure>
</section>

The recommended flow conditions for testing were approximately:

* **Buffer stream:** **3.0 mL/min**
* **Particle-containing stream:** **0.6 mL/min**

These independent inlet flow rates help create the pinched laminar condition needed to push particles into predictable streamline positions before the broad expansion.

# Mold Photo:

<section class="mold photo">
  <h2>Resin Printed Mold</h2>

  <figure class="mold">
    <img src="/assets/img/microfluidic-mold.jpg" alt="Resin printed mold for PDMS casting">
    <figcaption>
      <strong>Printed Mold</strong><br>
      The resin mold contains raised solid features that define the negative space of the final microfluidic channels when PDMS is cast over it.
    </figcaption>
  </figure>
</section>

# Casted Device:

<section class="casted device">
  <h2>PDMS Device</h2>

  <figure class="pdms">
    <img src="/assets/img/microfluidic-casted-device.jpg" alt="Casted PDMS microfluidic device after demolding">
    <figcaption>
      <strong>PDMS Device After Demolding</strong><br>
      After curing and demolding, the PDMS chip contains the inverse of the mold geometry and is ready to be bonded to a glass slide.
    </figcaption>
  </figure>
</section>

# Plasma Treatment / Bonding:

<section class="plasma treatment">
  <h2>Plasma Treatment</h2>

  <figure class="plasma">
    <img src="/assets/img/microfluidic-plasma-treatment.jpg" alt="Plasma treatment process for bonding PDMS to glass">
    <figcaption>
      <strong>Plasma Treatment Before Bonding</strong><br>
      Plasma treatment activates the PDMS and glass surfaces so they bond strongly and form a sealed microfluidic device.
    </figcaption>
  </figure>
</section>

# Device Demonstration Video:

Embed a short video here showing the device operating and the separated streams exiting their assigned outlets.

<iframe width="560" height="315" src="https://www.youtube.com/embed/YOUR_VIDEO_ID_HERE" title="Microfluidic Device Demonstration" frameborder="0" allowfullscreen></iframe>

# Discussion:

## Why Resin Printing?

Resin printing was a better fit for this project than most conventional subtractive or filament-based methods because the device relies on **small, smooth, highly repeatable features**. Microfluidic channels need consistent dimensions and good surface quality so the flow remains predictable and the PDMS can seal well to glass. SLA printing provides much finer resolution than FDM and can create mold features that are more appropriate for casting microfluidic structures.

It also allows fast iteration. If one geometry causes clogging, poor separation, or flow imbalance, the mold can be updated in CAD and reprinted much more quickly than using many traditional microfabrication methods.

## What I Would Change in a Future Iteration

If I could iterate on this design, I would focus most on the **outlet resistance balancing**. While the tortuous particle branches should help keep the buffer branch as the lowest-resistance path, the exact pressure distribution is still very sensitive to tubing, trapped bubbles, and small manufacturing tolerances.

In a future version, I would likely:

* Fine-tune the **length and width** of the small and large particle branches more systematically
* Potentially make the **small-particle outlet slightly longer** if too much flow is being pulled into that branch
* Add even smoother transitions at branch entrances to reduce stagnation and bubble traps
* Compare the actual hydraulic resistance of each branch more quantitatively instead of relying only on relative geometry

## How This Could Be Scaled or Modified

This design could be adapted to handle a wider range of particle sizes by:

* Changing the **pinched width** relative to the largest target particle
* Adjusting the **broad section width and length**
* Adding more carefully tuned outlet boundaries for additional size fractions
* Using more advanced PFF variants, such as asymmetric outlet control, if tighter separation is needed

However, increasing the number of outlet classes also makes flow balancing harder, especially when tubing and backpressure differences begin to dominate the separation behavior.

## Lower Limit on Particle Size

The lower limit on particle size in pinch flow fractionation is set by several factors:

* **Surface roughness of the channel walls**
* **Manufacturing resolution of the mold**
* **How accurately the pinched section can be printed**
* **Diffusion / streamline overlap effects for very small particles**
* **Sensitivity to small pressure or flow fluctuations**

In this project specifically, the assignment notes that particles **smaller than the channel surface roughness cannot be used effectively**, and particles below roughly **50 μm** become especially difficult in this workflow. That means the practical lower limit is not only a fluid mechanics issue, but also a fabrication and materials issue.

# Reflection:

This project was a really good example of how **microfluidic theory and manufacturability have to work together**. The math for pinch flow fractionation can tell you where the streamlines should go, but that does not automatically mean the device will work if the outlet geometry is poorly balanced, if bubbles get trapped, or if the printed mold is hard to demold or seal.

What stood out most to me was that the “ideal” fluidic layout and the “buildable” CAD model are not always exactly the same. My final CAD model stayed true to the intended streamline boundaries from the sketch, but I still had to adjust the geometry to avoid barb interference, maintain required spacing, and make the outlet branches more practical. I also made the particle outlet paths slightly more tortuous than the original concept so they would contribute more resistance and better support the flow split I wanted.

That tradeoff between theory and fabrication is probably the most important thing I learned from this project. Even though the whiteboard sketch captured the core concept, the final design needed to be slightly more realistic and robust in order to actually function as a resin-printed mold and PDMS device.

# Project Gallery:

{% include gallery caption="Microfluidic Pinch Flow Fractionation Project Gallery" %}
