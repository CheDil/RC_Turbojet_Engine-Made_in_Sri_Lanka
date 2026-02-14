<!-- PROJECT TITLE & BADGE -->
<p align="center">
  <img src="docs/cover_Image.png" width="1090" alt="Front View">
</p>

## RC Turbojet Engine Made in Sri Lanka

We fabricated a functional RC turbojet engine in Sri Lanka using cost-effective, locally available materials ✈️. Prioritizing functionality over weight, we first test with affordable materials before transitioning to aerospace-grade ones. This project showcases innovation🔥, adaptability, and engineering excellence with limited resources!🌍

---

## Table of Contents
This README provides a comprehensive guide to the design, manufacturing, technical decisions and challenges encounted throughout our RC turbojet engine project. Use the links below to quickly navigate to each section:
This README provides a comprehensive guide to the design, manufacturing, technical decisions and challenges encountered throughout our RC turbojet engine project. Use the links below to quickly navigate to each section:

- [Design Decisions](#design-decisions)
   - [Compressor](#compressor)
   - [Stator](#stator)
   - [Essential Features of the Stator](#essential-features-of-the-stator)
   - [Vaneless vs. Bladed Stators](#vaneless-vs-bladed-stators)
      - [Trade-offs Between Vaneless and Bladed Stators](#trade-offs-between-vaneless-and-bladed-stators)
- [Shaft](#shaft)
- [Turbo/nozzle w Guided vanes](#turbo-nozzle-w-guided-vanes)
   - [Aerodynamic and Geometry Considerations](#aerodynamic-and-geometry-considerations)
   - [Our NGV Fabrication Process](#our-ngv-fabrication-process)
- [Turbine](#turbine)
   - [Our Turbine Fabrication Approach](#our-turbine-fabrication-approach)
- [Combustion Chamber](#combustion-chamber)
   - [Our Manufacturing Approach](#our-manufacturing-approach)
- [Compressor Shroud](#compressor-shroud)
   - [Aerodynamic and Dimensional Considerations](#1-aerodynamic-and-dimensional-considerations)
   - [Structural and Material Considerations](#2-structural-and-material-considerations)
   - [Manufacturing and Integration](#3-manufacturing-and-integration)
- [Bearing](#bearing)
- [Full Assembly](#full-assembly)
- [Testing](#testing)
- [Reference](#reference)
- [Core Team](#core-team)

---

## Design Decisions

### Compressor
The compressor is a critical component in rc turbo jet engines, as it drives the entire system based on its compression ratio(**reference). This is why our initial focus was on selecting and sourcing the right compressor for the project.
The initial decision regarding the size of our turbojet engine was driven by the availability and practicality of sourcing a suitable compressor. For RC turbojet engines, a centrifugal compressor is essential. 

<p align="center">
  <img src="docs/310488_1_En_9_Fig17_HTML.gif.png" width="490" alt="Front View">
</p>

Manufacturing a custom compressor to our exact requirements would have required advanced 4-axis milling, with costs approaching LKR 50,000—making it impractical for our budget.

As an alternative, we considered using car turbocharger compressors(**reference), which are well-suited for this application. However, purchasing a brand-new turbocharger compressor would still cost around LKR 12,000. To further reduce costs, we visited compressor repair centers and sourced defective turbochargers that were discarded due to faults in other components, while the compressor section remained in good condition. This strategy enabled us to acquire the necessary compressor at a fraction of the market price, ensuring both affordability and functionality for our project.
<p align="center">
  <img src="docs/compressor.png" width="350" alt="Front View">
  <img src="docs/compressor_1.png" width="300" alt="Back View">
</p>
<p align="center"><em>Reference | Our Unit</em></p>

---


### Stator

### Essential Features of the Stator
- **Divergent Geometry:** Internal passages must be divergent (widening) to slow down the high-velocity air leaving the impeller and convert kinetic energy into static pressure.
- **Vane Placement and Gap:** Diffuser vanes should not start immediately at the impeller edge. A vaneless annular space (typically 1.15 to 1.2 times the wheel diameter) between the rotor and stator blades helps even out airflow.
- **Alignment and Angles:** The inner edges of the vanes must be perfectly aligned with the direction of airflow leaving the impeller. Even a few degrees of misalignment can prevent the engine from running. For a 66mm model rotor, an outflow angle of about 19–21 degrees is common.
- **Expansion Angle:** To prevent airflow separation and losses, the expansion angle between adjacent vanes should generally be 8–10 degrees. Slightly larger angles may be tolerated in model engines, but exceeding this range reduces efficiency.
- **Clearance Control:** The clearance between the rotating impeller and the static casing/diffuser should be minimal to prevent air leakage, but not so small as to cause aerodynamic buffeting and vibration.

Manufacturing the stator with the ideal features presents significant cost and technical challenges. We considered the following manufacturing techniques:

1. **4-Axis Milling:** Integrating vanes directly into the stator using 4-axis milling, which would cost around LKR 40,000 for the entire system.
2. **Lathe with Separate Vanes:** Machining the main stator body on a lathe and then attaching vanes separately.
3. **Lathe Only (No Vanes):** Fabricating the stator entirely on a lathe without adding vanes.

<p align="center">
  <img src="docs/stator.png" width="350" alt="Front View">
  <img src="docs/stator_1.png" width="400" alt="Back View">
</p>
<p align="center"><em>Reference | Our Unit</em></p>


Due to cost constraints, only options 2 and 3 were feasible. However, given the small size of the system, manufacturing and attaching separate vanes (option 2) was impractical. As a result, we chose option 3—making the stator using a lathe without vanes. 

A bladed diffuser is considered the best solution for a model jet engine, allowing for a compact frontal area and higher pressure conversion.
however vaneless stator systems are a recognized as a valid alternative design that trades some efficiency for manufacturing simplicity—a well-documented approach in turbo jet engines.

### Vaneless vs. Bladed Stators
#### Trade-offs Between Vaneless and Bladed Stators
The choice between using vanes or a vaneless space involves a trade-off between manufacturing simplicity and engine size:

**Advantages of a Vaneless Design:**
- **Simplicity:** Much easier to manufacture than a system requiring precisely angled blades.
- **Regulatory Stability:** Outstanding regulatory characteristics, as there are no blades that can cause flow breakaway if the angles are calculated incorrectly.
- **Turbocharger Application:** Vaneless nozzles are often used in turbochargers, where efficiency is less critical due to excess exhaust energy.

**Disadvantages of a Vaneless Design:**
- **Size Constraints:** Achieving sensible efficiency without vanes requires the engine diameter to be at least twice the diameter of the compressor wheel.
- **Residual Swirl:** Vaneless diffusers cannot easily eliminate the twisting motion of gases, leading to pressure drops as the gas moves toward the engine center.

**Conclusion from the Sources:**
The decision to omit stator vanes was based on references indicating that bladeless (vaneless) stator systems are suitable when simplicity is required and when testing basic system functionality is the priority. This approach allowed us to minimize design complexity and focus on essential performance.

The stator also contains three grooves to provide oil flow and dissipate bearing heat. We machined these grooves on a 3-axis milling machine using 5 mm endmills.

<p align="center">
  <img src="docs/stator_grooves.png" width="300" alt="Front View">
</p>


---

## Shaft
The shaft design strictly followed official reference dimensions, as these have already undergone intense design considerations for load balance, mechanical strength, and high-speed stability. We did not make any major changes, ensuring the shaft would reliably withstand the demanding conditions of turbojet operation.

**Summary of Design Considerations:**
Designing an engine shaft requires careful attention to mechanical strength, rotational stability, and thermal management. The reference design addresses:
- **Structural and Mechanical Requirements:** Efficient energy transfer, management of axial loads, and secure coupling/alignment.
- **Dynamics and Vibration Control:** Avoidance of resonance, maintaining a safe margin above critical speed, and optimal shaft proportions for rigidity.
- **Material Selection:** Use of heat-treated steel for toughness, avoiding materials like titanium and stainless steel for reliability and heat dissipation.
- **Precision Machining and Bearings:** Extreme accuracy in machining, robust bearing support, and accommodation for differential thermal expansion.

By adhering to these proven reference dimensions, we made only minimal changes—primarily to ensure proper fitment with the compressor. For manufacturing, we selected high-carbon steel, which allowed for precise machining of the shaft's tiny details. We also tested a shaft made from low-carbon steel, but it made extremely difficult to achieve the fine details required, and at very small diameters, the shaft became imbalanced. This confirmed that high-carbon steel was the correct material choice for this application. The entire process, performed on a lathe over a full day, was time-consuming due to the small dimensions and required accuracy.

<p align="center">
  <img src="docs/shaft_1-3.png" width="550" alt="Front View">
</p>


## Turbo/nozzle w Guided vanes
### Aerodynamic and Geometry Considerations
The aerodynamic shape and geometry of the nozzle guide vanes (NGV) are crucial for efficient energy transfer in a turbojet engine. The vanes serve as stationary nozzles, converting the pressure energy of hot combustion gases into high-velocity jets that drive the turbine rotor. Key aerodynamic and geometric considerations include:

- **Energy Conversion:** NGVs accelerate combustion gases by forming convergent passages between adjacent vanes, increasing gas velocity to near sonic speeds (up to ~2,500 ft/s in full-sized engines).
- **Directional Flow (Whirl):** The vanes impart a specific spin or whirl to the gas, matching the direction of turbine rotation. This maximizes the energy transferred to the rotor blades.
- **Blade Twist:** The vanes are twisted, with a greater stagger angle at the tip than at the root. This ensures the gas flow does equal work along the entire blade and exits with uniform axial velocity.
- **Vane Count:** To prevent aerodynamic oscillations, the number of vanes should not share a common divisor with the number of rotor blades (e.g., 11 vanes for 19, 21, or 23 rotor blades).
- **Overlap and Flow Control:** When viewed from the front, vanes should overlap as much as possible, preventing a straight line of sight through the NGV. This ensures the gas is properly directed and reduces losses.

In summary, careful attention to NGV geometry—including convergent duct design, controlled whirl, blade twist, and vane count—ensures that combustion gases are efficiently accelerated and precisely directed onto the turbine, maximizing both performance and stability.

### Our NGV Fabrication Process
To fabricate the nozzle guide vanes (NGV) for our engine, we followed a step-by-step process focused on precision and aerodynamic requirements:

1. **Core Preparation:**
   - We first designed and machined the NGV core to ensure a precise fit with both the shaft casing and the shaft itself.

2. **Vane Material and Cutting:**
   - Using 1.2mm stainless steel, we laser-cut rectangular strips to match the required vane height from the core.
   - These strips were then further divided into smaller rectangles, each forming an individual vane.

3. **Vane Shaping:**
   - Each small rectangle was carefully bent to achieve the correct aerodynamic profile, mimicking the twist and divergence found in actual turbine vanes. This step was time-consuming, as it required each vane to be shaped inorder to ensure proper gas flow.

4. **Assembly and Welding:**
   - The shaped vanes were positioned on the core to create convergent passages between adjacent vanes, ensuring the gas would be accelerated and directed as required.
   - We used TIG welding to attach each vane to the core, taking care to maintain the correct orientation: vanes were set to direct flow perpendicular to the turbine vanes and to overlap as much as possible when viewed from the front.

This hands-on fabrication approach allowed us to meet the main aerodynamic requirements for NGVs, despite the challenges of working with small, precise components and manual assembly.

<p align="center">
  <img src="docs/Turbo_guided_vanes_1.png" width="260" alt="Front View">
  <img src="docs/turbo_guided_2.png" width="260" alt="Front View">
  <img src="docs/turbo_guided_3.png" width="260" alt="Front View">

</p>

## Turbine

According to Thomas Kamps and related sources, there are two main approaches to manufacturing turbine rotors for model jet engines:

### Sheet Metal (Kamps Method) for home builders.
- **Material:** Typically uses 6 mm thick high-grade stainless steel (such as 316, V4A, or INOX). Industrial alloys like Inconel are preferred for higher thrust, but stainless steel is suitable for moderate thrust (~40 N).
- **Cutting:** The turbine disc is cut from a metal sheet—either by water jet for precision or manually with a hacksaw for home builds.
- **Blade Formation:** Slots are cut for the blades, which are then heated and twisted (about 30–35°) to form the correct angle using pliers or a custom tool.
- **Finishing:** Blades are ground and sanded to achieve an aerodynamic, cambered profile, with a rounded inlet and pointed outlet.

### Industrial Manufacturing (Casting)
- **Investment Casting:** A casting process that creates complex turbine rotors with smooth surfaces and internal cooling channels.
- **Advanced Methods:** For extra durability, blades can be made using special casting techniques that help them resist warping at high temperatures.

### Our Turbine Fabrication Approach
Instead of fabricating the turbine from sheet metal or casting, we repurposed an undamaged turbine from an old car turbocharger. This approach provided a component made from a material capable of withstanding very high temperatures, which is essential for this part of the engine. To adapt the turbocharger turbine for our use and reduce its weight, we cut away a portion of its cross-section. This method offered several advantages but also presented unique challenges:

1. **Material Hardness and Cutting:**
   - The used turbocharger turbine had already experienced multiple heat, cooling, and stress cycles, making the material extremely hard. Cutting the cross-section precisely was difficult and time-consuming. After cutting, additional time was spent polishing and smoothing the surface, while being extremely cautious not to break any vanes. 

2. **Machining the Shaft Hole:**
   - Drilling a hole for the shaft was particularly challenging due to the hardened material. We visited several locations to source high-quality drill bits capable of penetrating this material. The drilling process itself was extremely time-consuming and we had to sharpen the bit approximately 16 times throughout the process. The hole was then finished on a lathe to ensure accuracy and minimize the risk of vibration from uneven material distribution.

This method allowed us to utilize a high-temperature-resistant material while overcoming the difficulties of machining a previously used and hardened turbine component.

> **Safety Note:**
> When working with a reused turbocharger turbine, extra caution is required. The material's increased hardness from previous heat and stress cycles can make it more brittle and susceptible to cracking or failure during modification or operation. Always prioritize safety and thoroughly inspect the component before and after machining to minimize risks.


<p align="center">
  <img src="docs/turbine.png" width="300" alt="Front View">
  <img src="docs/turbine_1.png" width="240" alt="Back View">
  <img src="docs/turbine_2.png" width="250" alt="Back View">

</p>
<p align="center"><em>Reference | Our Unit</em></p>

## Combustion Chamber

The combustion chamber burns the fuel–air mixture to release heat, expanding and accelerating gases that drive the turbine. In mini‑turbojets this occurs in a very small volume with a very short residence time (≈1/500 s).

Air Zoning
- Primary zone — 20–25% of the total mass flow is used for combustion. Fuel is confined to this zone so the local air–fuel ratio is near the stoichiometric value for kerosene (≈15:1).
- Secondary (intermediate) zone — ≈20% of the air is introduced to assist mixing and stabilise the flame.
- Dilution & cooling — the remaining 40–60% of air reduces gas temperatures and protects components: about one‑third of this (≈20% of total flow) dilutes hot gases to turbine‑safe temperatures (≈850–1,700°C), while the rest forms a cooling film along the flame‑tube walls.

Flame Stabilization & Fuel Preparation
- Diffusion: Compressor air must be decelerated (roughly from ≈500 ft/s to ≈80 ft/s) so the flame is not blown out.
- Recirculation (toroidal vortex): Swirl vanes and secondary air holes create a stable recirculating zone that anchors the flame and brings fuel droplets to ignition temperature.
- Pre‑vaporisation: Small engines often use vaporisation tubes or coils ("walking sticks") to preheat and vaporise fuel, ensuring complete combustion in the short residence time available.

Configurations
- Can‑type: Multiple individual chambers arranged around the shaft (sometimes interconnected for pressure equalisation during start).
- Tubo‑annular: Several flame tubes inside a common outer casing.
- Annular: A single continuous annular flame tube — preferred for mini‑turbojets because it is more compact, lighter, and uses cooling air more efficiently.

Materials & Integrity
The combustion chamber must resist steep temperature gradients, oxidation/corrosion, and creep.
- Full‑scale engines: typically use high‑performance nickel alloys (e.g., Inconel, Nimonic) to withstand extreme temperatures.
- Model engines: 316 stainless steel (0.5–1.0 mm) is commonly acceptable due to lower operating temperatures and pressures.

Performance & Emissions
Well‑designed chambers aim for near‑complete combustion at typical operating conditions. Dilution air both reduces turbine‑inlet temperatures and helps oxidise unburnt species, minimising smoke and carbon monoxide emissions.

### Our Manufacturing Approach

Considering the chamber's requirements and local manufacturing constraints, we were able to produce a unit very close to the original. stainless sheets are inexpensive and laser cutting allowed precise hole patterns. Most forming was done by bending (many bends were hand‑formed because machines capable of bending an inner diameter of ~30 mm are uncommon locally). Parts were joined with TIG welding; this added cost due to limited local TIG expertise and the need to carefully control welding current to avoid burn‑through, but the finished chamber matched the original closely in form and function.

<p align="center">
   <img src="docs/combustion_chamber.png" width="290" alt="Front View">
   <img src="docs/combustion_chamber_1.png" width="250" alt="Front View">
   <img src="docs/combustion_chamber_2.png   " width="250" alt="Front View">

</p>

## Compressor Shroud
The compressor shroud (or compressor cover) is a vital component that directly impacts engine efficiency, reliability, and safety. Its design and manufacture require careful attention to several key factors:

### 1. Aerodynamic and Dimensional Considerations
- **Tip Clearance Management:** Maintain the smallest possible gap (ideally ~0.3 mm in model engines) between the impeller blade tips and the shroud wall to minimize air leakage and maximize efficiency.
- **Constant Gap Geometry:** Ensure a uniform gap along the entire blade length by precisely matching the shroud’s internal profile to the inducer and exducer curvatures of the compressor wheel. *(Image recommended for clarity)*
- **Flow Induction:** Design the shroud to provide even air distribution at the inlet, avoiding disruptions or excessive gaps that could reduce efficiency or cause overheating.

### 2. Structural and Material Considerations
- **Rigidity and Weight:** The shroud must be lightweight yet rigid to maintain precise clearances at high speeds.
- **Material Selection:**
   - *Aluminium* is standard for compressor shrouds due to its light weight and suitability for cooler engine sections.
   - *Magnesium* and *composites* are used in advanced engines for further weight reduction and noise suppression.
   - *Titanium* offers high rigidity but is generally avoided in rubbing areas due to fire risk from frictional heating.
- **Thermal Expansion:** Account for different expansion rates between the compressor wheel and shroud, ensuring clearances are optimal both cold and hot.

### 3. Manufacturing and Integration
- **Precision Machining:** Achieving the required internal profile and tight tolerances often necessitates 5-axis CNC milling, as manual machining is challenging at these scales.
- **Alignment and Sealing:** The shroud must be perfectly aligned with the diffuser, typically attached with self-locking fasteners. Joints are sealed with teflon tape or oil-swelling rubber bands to prevent leaks.

### Our Manufacturing Approach
Due to the high cost of 5-axis milling, we considered both casting and lathe machining from raw material. However, casting services for such small components were unavailable. As a result, we used a lathe, which required removing a significant amount of material to achieve the desired shroud shape. This process was time-consuming, especially for smoothing and finishing. Based on our experience, we recommend casting over subtractive manufacturing when possible, as it is more material- and time-efficient for this shape. 

<p align="center">
   <img src="docs/compressor_shroud_1.png" width="350" alt="Front View">
</p>

## Bearing
Below is a concise summary of bearing requirements and recommendations for mini‑turbojet engines.

- **Rotational speed & cooling:** Bearings must tolerate extremely high speeds (≈100,000–180,000 RPM). Active cooling (ducted compressor air) or equivalent cooling paths are essential to keep bearing temperatures within safe limits.

- **Temperature resistance:** Bearings should stay relatively cool despite nearby turbine temperatures (turbine sections can exceed 600°C). Use low‑thermal‑conductivity materials where appropriate and ensure effective heat removal.

- **Material selection:** Stainless‑steel deep‑groove ball bearings are common and practical. For high performance, prefer hybrid ceramic bearings (silicon‑nitride balls) — they offer longer life and can safely exceed nominal speed ratings when properly cooled. Avoid bearings with rolled‑brass cages for this application.

- **Lubrication:** Use very low‑viscosity lubrication suitable for extreme RPMs. Many mini‑turbojets use kerosene as the primary lubricant  a smawithll addition (~5%) of turbine oil. Ensure reliable lubricant flow through the bearing chambers.

- **Preload & mounting precision:** Apply the design preload (for some designs ≈15 N) to maintain axial/radial stability. Machine bearing seats and housings to very tight concentricity tolerances (≈0.01 mm) to prevent imbalance at high speed.

When selecting bearings for our build we prioritized what was affordable and available locally:

- For Stage 1 testing, we opted for stainless steel bearings as the most economical local option. These bearings are rated for around 56,000 RPM with an outer diameter of 13 mm and an inner bore of 6 mm. However, the small shaft diameter limited our bearing choices.  Reaching approximately 100,000 RPM would necessitate hybrid ceramic bearings, costing around LKR 20,000 each. Therefore, higher-speed hardware will be a Stage 2 upgrade.

To manage cooling and lubrication, we added three grooves to the stator to ensure airflow to the bearing area. Initially, we tested with continuous circulation of low-viscosity oil but found that at high RPM, most of the oil was expelled by airflow. Consequently, subsequent tests involved manual oiling after each run. We also fixed the bearings with a relaxed fit to allow for thermal expansion. Additionally, the grooves were maintained to provide proper air cooling and minimise heat transfer to the bearings.

The shaft casing was made relatively thick to reduce heat transfer from the hot internals to the bearings.

Given the limited number of runs conducted so far, the bearing lifespan remains an unaddressed issue. For local sourcing in Sri Lanka, suppliers like Airline Traders in Pettah offer a wide selection of bearings and are a valuable resource.


## Full Assembly

<p align="center">
   <img src="docs/Full Assembly.png" width="750" alt="Front View">
</p>
<p align="center">
   <img src="docs/Full Assembly_1.png" width="450" alt="Front View">
</p>


## Testing
https://github.com/user-attachments/assets/32d617c5-ecaf-4ea1-a093-e426e5f9da0c

This was not an ideal self-sustaining operating condition, but an intentional extreme-condition test — and the machine handled it successfully.
 
## Reference

- Thomas Kamps (2018) — Model Small Gas Turbine Jet Engines. PDF: [Resources/Thomas%20Kamps%20-%20Model%20Small%20Gas%20Turbine%20Jet%20Engines%20(2018).pdf](Resources/Thomas%20Kamps%20-%20Model%20Small%20Gas%20Turbine%20Jet%20Engines%20(2018).pdf)
- Rolls‑Royce plc (1996) — The Jet Engine. PDF: [Resources/- The Jet Engine-Rolls-Royce plc (1996).pdf](Resources/-%20The%20Jet%20Engine-Rolls-Royce%20plc%20(1996).pdf)
- Research paper (local) — PDF: [Resources/research_paper.pdf](Resources/research_paper.pdf)

- GrabCAD — RC Jet Engine library: [https://grabcad.com/library/tag/rc-jet-engine](https://grabcad.com/library/tag/rc-jet-engine)

## Core Team
  <p align="center"><em>Cheran Dilnuka | Deneth Nonis | Thevindu Dilmith | Upul Pathmakumara</em></p>
<p align="center">
  <img src="docs/Cheran_Dilnuka.png" width="150" alt="Front View">
  <img src="docs/Deneth Nonis.png" width="150" alt="Back View">
  <img src="docs/Thevindu Dilmith.png" width="150" alt="Back View">
  <img src="docs/Upul Pathmakumara.png" width="150" alt="Back View">

</p>



<p align="center">
  <img src="docs/Footer_image.png" width="1050" alt="Front View">
</p>
