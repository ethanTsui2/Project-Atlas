# Atlas V1 Bill of Materials

This BOM separates **hardware/materials used in the completed prototype** from items purchased during development that were not necessarily consumed in the final build.

It is therefore more representative than treating every project purchase as installed hardware.

## Final Build — Core Hardware

| Item | Qty used | Role |
|---|---:|---|
| MG995 metal-gear servo | 3 | Higher-load arm joints |
| MG90S micro servo | 2 | Lighter end-effector functions |
| Arduino Nano | 1 | Main controller |
| PCA9685 16-channel PWM driver | 1 | Servo PWM generation over I2C |
| WH148-style potentiometer | 5 | Manual joint input |
| 16×2 I2C LCD | 1 | Joint / angle feedback |
| Regulated 5 V, 10 A power supply | 1 | External servo power |
| Flanged ball bearings (F688-2RS, 8×16×5 mm) | As required | Joint / rotating support |
| Precision steel balls | 6 | Printed slew-bearing base |
| Servo extension leads | As required | Servo wiring and routing |
| 22 AWG flexible wire | As required | Power / controller wiring |
| Assorted metric fasteners | As required | Mechanical assembly |

## Printed / Fabricated Components

Structural and enclosure parts were produced using FDM 3D printing from the final CAD package, including:

- base housing
- shoulder / joint structure
- upper arm
- revised forearm
- wrist and gripper components
- bearing holders and servo covers
- printed slew-bearing components
- controller enclosure and panel

PLA purchased during development included black and white Anycubic filament. Final visible arm components were surface-finished after printing.

## Surface Finish Used

| Material | Purpose |
|---|---|
| Rust-Oleum 2-in-1 Filler & Sandable Primer | Fill print texture / prepare surface |
| Rust-Oleum metallic silver | Metallic base layer |
| Dupli-Color Metalcast Anodized Coating — Red | Final translucent metallic-red color |
| Rust-Oleum Painter's Touch 2X Gloss Clear | Protective gloss clear coat |

## Development / Workshop Purchases

The following were purchased for Project Atlas development, prototyping, assembly, or future reuse, but should **not** automatically be interpreted as installed in the final robot:

- M3 heat-set insert / screw assortment
- perfboard assortment
- solder wick and flux
- extra MG995 and MG90S servos from multipacks
- extra potentiometers
- excess bearings / steel balls from assortments
- extra wiring and servo extension leads
- unused filament from purchased spools

General reusable tools such as screwdrivers, soldering tools, cutters, and measurement tools are intentionally excluded from the BOM.

## Procurement Cost Note

The supplied purchase screenshots contain a mixture of TTD and USD order totals. Several screenshots are cropped before the order total, and some orders contain multiple products, so an exact per-part final-build cost cannot be reconstructed reliably from those screenshots alone.

From the screenshots where an order total is visible:

- **TTD-denominated visible orders:** TTD **1,290.93**
- Using a representative mid-August 2026 historical rate of about **0.145 USD per TTD**, this is approximately **US$187.18**.
- **USD-denominated visible orders:** **US$26.84**
- **Partial documented procurement total:** approximately **US$214.02**

This is a **procurement subtotal, not the final robot cost**. It includes some materials intended for future projects and excludes screenshots where the order total was not visible, along with generic reusable tools.

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

Screenshots for the MG90S/potentiometer purchase, servo-extension leads, and soldering consumables did not show a usable order total and are not included in the subtotal.

</details>

## Notes

- The final arm uses a **5 V, 10 A** external supply; this supersedes the lower-current supply considered earlier in development.
- The final base includes the printed slew-bearing redesign with six steel balls.
- Quantities marked "As required" are intentionally not invented where the final installed count was not documented.
