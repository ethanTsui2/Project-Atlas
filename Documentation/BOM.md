# Atlas V1 Bill of Materials

This BOM separates the parts and materials used in the finished prototype from things I bought during development but did not necessarily use in the final arm.

## Final Build - Core Hardware

| Item | Qty used | Role |
|---|---:|---|
| MG995 metal-gear servo | 3 | Higher-load arm joints |
| MG90S micro servo | 2 | Lighter end-effector functions |
| Arduino Nano | 1 | Main controller |
| PCA9685 16-channel PWM driver | 1 | Servo PWM generation over I2C |
| WH148-style potentiometer | 5 | Manual joint input |
| 16x2 I2C LCD | 1 | Joint / angle feedback |
| Regulated 5 V, 10 A power supply | 1 | External servo power |
| Flanged ball bearings (F688-2RS, 8x16x5 mm) | As required | Joint / rotating support |
| Precision steel balls | 6 | Printed slew-bearing base |
| Servo extension leads | As required | Servo wiring and routing |
| 22 AWG flexible wire | As required | Power / controller wiring |
| Assorted metric fasteners | As required | Mechanical assembly |

## Printed / Fabricated Components

The main structural and enclosure parts were FDM printed from the final CAD package, including:

- base housing
- shoulder and joint structure
- upper arm
- revised forearm
- wrist and gripper parts
- bearing holders and servo covers
- printed slew-bearing parts
- controller enclosure and panel

I bought both black and white Anycubic PLA during development. The final visible arm parts were painted after printing.

## Surface Finish

| Material | Purpose |
|---|---|
| Rust-Oleum 2-in-1 Filler & Sandable Primer | Fill print texture and prepare the surface |
| Rust-Oleum metallic silver | Metallic base layer |
| Dupli-Color Metalcast Anodized Coating - Red | Final translucent metallic-red color |
| Rust-Oleum Painter's Touch 2X Gloss Clear | Protective gloss clear coat |

## Development / Workshop Purchases

These were bought for Atlas development, prototyping, assembly, or future projects, but they were not all installed in the final robot:

- M3 heat-set insert / screw assortment
- perfboard assortment
- solder wick and flux
- extra MG995 and MG90S servos from multipacks
- extra potentiometers
- extra bearings and steel balls from assortments
- extra wiring and servo extension leads
- unused filament from the purchased spools

I did not include general reusable tools such as screwdrivers, soldering tools, cutters, or measuring tools.

## Procurement Cost Note

The purchase screenshots include both TTD and USD totals. Some screenshots are cropped before the order total and some orders contain multiple items, so this is not an exact final-build cost.

From the screenshots where the order total is visible:

- **TTD visible orders:** TTD **1,290.93**
- Using a representative mid-August 2026 rate of about **0.145 USD per TTD**, that is about **US$187.18**
- **USD visible orders:** **US$26.84**
- **Partial documented procurement total:** about **US$214.02**

This number is a procurement subtotal, not the cost of only the parts installed on Atlas. Some of the material was left over for future projects, and some purchases are missing because the screenshot did not show a usable total.

<details>
<summary><b>Visible order totals used for the subtotal</b></summary>

| Order date | Visible purchase(s) | Order total |
|---|---|---:|
| Aug 30, 2026 | Gloss clear + metallic silver paint | TTD 139.34 |
| Aug 18, 2026 | Precision steel-ball assortment | TTD 66.70 |
| Aug 13, 2026 | Dupli-Color Metalcast red | TTD 149.29 |
| Aug 9, 2026 | Anycubic white PLA bundle | TTD 200.05 |
| Aug 7, 2026 | 22 AWG wire assortment | TTD 113.84 |
| Aug 6, 2026 | Anycubic black PLA | TTD 94.76 |
| Jul 15, 2026 | F688-2RS flanged bearings | TTD 89.94 |
| Jul 8, 2026 | 5 V, 10 A power supply | TTD 153.99 |
| Jul 8, 2026 | Arduino Nano boards + PCA9685 modules | TTD 156.28 |
| Jul 4, 2026 | MG995 servo pack | TTD 126.74 |
| Jun 30, 2026 | Perfboard assortment | US$10.74 |
| Jun 30, 2026 | Heat-set insert / screw assortment | US$16.10 |

The MG90S/potentiometer purchase, servo-extension leads, and soldering consumables did not show a usable order total in the screenshots, so I left them out of the subtotal.

</details>

## Notes

- The final arm uses a **5 V, 10 A** external supply instead of the lower-current supply I considered earlier.
- The final base uses the printed slew-bearing redesign with six steel balls.
- I used "As required" where I did not have a final installed count instead of guessing.
