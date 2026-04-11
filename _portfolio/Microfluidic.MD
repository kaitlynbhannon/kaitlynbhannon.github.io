---
title: "Microfluidic Pinch Flow Fractionation Device"
excerpt: "A resin-printed microfluidic device designed to separate particles by size using pinch flow fractionation."
header:
  image: /assets/img/realdevice.jpg
  teaser: /assets/img/realdevice.jpg
gallery:
  - image_path: /assets/img/resinprinter.jpg
  - image_path: /assets/img/whiteboard1.jpg
  - image_path: /assets/img/whiteboard2.jpg
  - image_path: /assets/img/paperdevice.jpg
---

---

# Purpose:

This project was to design a microfluidic device that separates particles by size using pinch flow fractionation (PFF). The device was created as a resin-printed mold, then cast in PDMS and bonded to glass for testing.

The goal was to separate:
* Small particles: 125–150 μm  
* Large particles: 425–500 μm  

---

# What is Pinch Flow Fractionation?

Pinch flow fractionation works by squeezing particles into a narrow channel so they line up based on size. When the channel expands, those positions stay separated, and the particles can be directed into different outlets.

This is useful because it sorts particles without filters, which helps avoid clogging and keeps flow smooth.

Example application: sorting cells or beads in biomedical devices.

Reference (original design inspiration):  
[Separation enhancement in pinched flow fractionation (Vig & Kristensen, 2008)](https://doi.org/10.1063/1.3028652)

---

# Design:

### Key Dimensions

* Pinched width: 0.65 mm
* Broad width: 5 mm
* Small particle boundary: 4.52 mm
* Large particle boundary: 3.08 mm

### Outlet Layout (top → bottom)

* Small particles: 0.5 mm  
* Large particles: 1.4 mm  
* Buffer: 3 mm  

These were placed based on the theoretical streamline positions from the PFF equation.

---

### Why This Geometry Works

* The pinched section forces particles into predictable positions based on size  
* The broad section (15 mm) allows those positions to separate clearly  
* Outlets are placed at calculated Y₀ locations so each particle size enters the correct path  

---

### Flow Balancing

One of the hardest parts is making sure each outlet gets the right amount of flow.

To handle this:

* Particle outlets were made narrower and more tortuous
* Buffer outlet was kept wider and shorter
* This increases resistance in particle paths and lets buffer carry more flow naturally

---

### CAD Design

Design rules followed:

* Channels ≥ 3 mm from edges (for bonding)
* Feature size > 85 μm (XY), > 25 μm (Z)
* Aspect ratio < 4:1  
* ≥ 1 mm spacing between features  
* Ports spaced ≥ 11 mm apart  
* Dead volume and sharp corners minimized (reduces bubbles)
* 2.2 mm inlet/outlet posts added for barbs

---

### Real vs. Ideal Design

This layout is based on my original sketch, but I made a few changes in CAD:

* Adjusted spacing so barbs wouldn’t overlap
* Made outlet paths slightly more tortuous to improve flow control
* Smoothed transitions with fillets to reduce bubble trapping

---

# Math + Design Work:

<figure>
  <img src="/assets/img/whiteboard1.jpg" alt="Math work 1">
</figure>

<figure>
  <img src="/assets/img/whiteboard2.jpg" alt="Math work 2">
</figure>

---

# CAD Model:

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b60281192e47b31f01fcc7f?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

---

# Fabrication Process:

### Resin Mold

* Designed mold in CAD (negative of channels)
* Printed using SLA resin printer
* Washed in IPA to remove uncured resin
* Dried and lightly cured to prevent warping

### PDMS Device

* Mixed PDMS 
* Poured over mold and cured
* Peeled off to reveal channels
* Plasma treated and bonded to glass
* Added barbs for tubing connections

---

# Why Parylene Coating?

Resin prints can stop PDMS from curing properly.

Parylene coating helps by:
* Creating a smooth, non-reactive surface  
* Preventing curing inhibition  
* Improving surface finish for better sealing  

---

# Testing:

Here is how my device looked:

<figure>
  <img src="/assets/img/realdevice.jpg" alt="Final Device">
  <figcaption>Final PDMS device</figcaption>
</figure>

And here is what was SUPPOSED to happen...

<figure>
  <video width="560" controls>
    <source src="/assets/img/devicevidshort.mp4" type="video/mp4">
  </video>
  <figcaption>
    <strong>Device Test Video</strong><br>
    Expected flow behavior based on design
  </figcaption>
</figure>

But mine, unfortunately, did not do that.

---

# Results + Reflection:

My device did not fully work as intended, but most prototypes don't on the first iteration, and that's ok!

The main issue:
* The large particle region was too narrow
* Particles had to move in single file, which caused clogging

---

### What I Would Fix for Next Time:

* Increase widths, especially in the large particle region  
* Allow more space for particles to pass without stacking  
* Keep the same overall layout, but scale dimensions better  

---

### What Worked:

* The overall shape and outlet ratios were promising
* Flow separation concept was correct
* Resistance-based outlet design was a good approach

---

# Discussion:

### Why Resin Printing?

* High resolution is better for small channels  
* Smooth surfaces are better sealing with glass  
* Faster and easier iteration than traditional methods  

---

### Limits of This Design

Small particles are harder to separate because:

* Channel roughness becomes significant  
* Printing resolution limits accuracy  
* Flow becomes more sensitive to small errors  

---

# Final Thoughts:

This project showed that even if the math and concept are right, geometry details matter a lot. Small changes in width can completely change whether the device works or not.

Even though my device didn’t fully succeed, the design logic was solid — it just needed better scaling in key areas.

---

{% include gallery caption="Microfluidic Project Gallery" %}
