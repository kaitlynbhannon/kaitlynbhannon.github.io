<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>3D Printed Pickleball Paddle Project</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 0;
            background-color: #f4f6f8;
            color: #333;
        }
        header {
            background-color: #1f3c88;
            color: white;
            padding: 20px;
            text-align: center;
        }
        section {
            margin: 20px auto;
            padding: 20px;
            max-width: 900px;
            background: white;
            border-radius: 10px;
            box-shadow: 0 2px 8px rgba(0,0,0,0.1);
        }
        h2 {
            color: #1f3c88;
        }
        .image-placeholder {
            width: 100%;
            height: 250px;
            background-color: #ddd;
            display: flex;
            align-items: center;
            justify-content: center;
            margin: 15px 0;
            border-radius: 8px;
            color: #666;
            font-style: italic;
        }
        footer {
            text-align: center;
            padding: 15px;
            font-size: 14px;
            color: #777;
        }
    </style>
</head>
<body>

<header>
    <h1>🏓 3D Printed Pickleball Paddle Project</h1>
    <p>Rapid Prototyping Design | DF-2100 Bonus Project</p>
</header>

<section>
    <h2>Overview</h2>
    <p>
        This project focused on designing and manufacturing a fully functional pickleball paddle using additive manufacturing. 
        The paddle meets 2026 USA Pickleball standards while integrating aerodynamic, ergonomic, and modular design features. 
        The paddle face and handle were printed separately due to printer size constraints and assembled using a snap-fit mechanism.
    </p>

    <div class="image-placeholder">Insert Full Paddle Image Here</div>
</section>

<section>
    <h2>Design Features</h2>
    <ul>
        <li><strong>Paddle Face:</strong> Blue PLA with aerodynamic gap at the bottom</li>
        <li><strong>Handle:</strong> Black TPU, 12% infill, internal gap for grip and flexibility</li>
        <li><strong>Edge Guard:</strong> Black TPU snap-on protective guard</li>
        <li><strong>Assembly:</strong> Snap-fit connection between handle and paddle</li>
    </ul>

    <div class="image-placeholder">Insert Exploded View / CAD Model Here</div>
</section>

<section>
    <h2>1. Paddle Design & Rule Compliance (3%)</h2>
    <p>
        The paddle was designed to comply with the 2026 USA Pickleball Equipment Standards Manual. The total dimensions were kept under the 
        24-inch combined length and width limit, and the paddle length did not exceed 17 inches. PLA was selected for the paddle face due to 
        its rigidity and non-compressible properties, ensuring compliance with material requirements. The hitting surface was printed smooth 
        and flat to avoid excessive roughness that could generate illegal spin. An aerodynamic gap was incorporated into the lower section 
        of the paddle to reduce drag and improve maneuverability without compromising structural integrity. The paddle successfully withstood 
        gameplay conditions and maintained durability throughout testing.
    </p>

    <div class="image-placeholder">Insert Paddle Surface Close-Up</div>
</section>

<section>
    <h2>2. TPU Handle & Edge Guard (3%)</h2>
    <p>
        The handle was printed using black TPU at 12% infill to maximize comfort and flexibility. A gap was intentionally designed within the 
        handle to enhance grip and allow slight deformation during use, improving ergonomics and control. The handle connects to the paddle 
        via a snap-fit mechanism that was precisely modeled to match the paddle geometry, resulting in a secure and accurate fit. However, 
        under high swing forces, the snap-fit connection may pose a risk if the material tension is exceeded.
    </p>

    <p>
        The paddle also includes an interchangeable TPU edge guard designed to protect the paddle face from impact with the ground. The guard 
        snaps onto the paddle edges and absorbs impact effectively. One limitation observed was that TPU tends to stretch over time, causing 
        the guard to loosen. In future iterations, tighter tolerances would improve long-term fit and retention.
    </p>

    <div class="image-placeholder">Insert Handle Close-Up</div>
    <div class="image-placeholder">Insert Edge Guard Image</div>
</section>

<section>
    <h2>3. Weight & Mass Balance Optimization (1%)</h2>
    <p>
        The paddle was designed with a focus on achieving a midweight classification (7.3–8.3 oz) to balance power and control. The use of PLA 
        for the paddle face provided a stable hitting surface, while TPU in the handle reduced overall weight and shifted the center of mass 
        slightly toward the grip. This resulted in improved maneuverability and reduced fatigue during gameplay. The aerodynamic gap further 
        reduced excess material, contributing to weight optimization. Overall, the paddle achieves a balanced feel suitable for controlled, 
        responsive play while still maintaining sufficient power.
    </p>

    <div class="image-placeholder">Insert Weight Distribution Diagram</div>
</section>

<section>
    <h2>Manufacturing Process</h2>
    <p>
        Due to the 300 x 300 mm build plate limitation of the Voron 3D printers, the paddle face and handle were printed separately. Prints 
        were scheduled overnight to ensure completion. The paddle face was printed in PLA, while the handle and edge guard were printed in TPU. 
        Components were assembled using a snap-fit connection, eliminating the need for additional hardware such as bolts or inserts.
    </p>

    <div class="image-placeholder">Insert Print Setup Image</div>
</section>

<footer>
    <p>Created for DF-2100 Rapid Prototyping | 2026</p>
</footer>

</body>
</html>
