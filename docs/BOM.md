# Bill of Materials (BOM)

## Overview

Project Atlas is designed around affordable, commercially available components while maintaining modularity, repairability, and ease of manufacturing.

---

## Purchased Components

| Item | Qty | Unit Cost | Total Cost | Supplier | Link | Status | Purpose |
|---|---:|---:|---:|---|---|---|---|
| MG90S Metal Gear Servo Pack | 5 | $3.20 | $15.99 | Amazon | [Link](https://www.amazon.com/dp/B09V5BR7J5?ref=ppx_yo2ov_dt_b_fed_asin_title&th=1) | Ordered | Joint actuation |
| 10k Potentiometer Pack | 20 | $0.46 | $9.29 | Amazon | [Link](https://www.amazon.com/dp/B00MCK7JMS?ref=ppx_yo2ov_dt_b_fed_asin_title&th=1) | Ordered | Manual joint control |
| 5V 3A Power Supply | 1 | $7.59 | $7.59 | Amazon | [Link](https://www.amazon.com/dp/B078RXZM4C?ref=ppx_yo2ov_dt_b_fed_asin_title&th=1) | Ordered | External servo/electronics power |
| Perfboard Kit | 1 | $9.99 | $9.99 | Amazon | [Link](https://www.amazon.com/dp/B0G8JLX1HR?ref=ppx_yo2ov_dt_b_fed_asin_title&th=1) | Ordered | Permanent electronics board |
| M3 Heat-Set Insert Kit with Screws | 1 | $14.98 | $14.98 | Amazon | [Link](https://www.amazon.com/dp/B0CMZL4T6J?ref=ppx_yo2ov_dt_b_fed_asin_title) | Ordered | Threaded inserts for 3D printed parts |

---

## Purchased Cost Summary

| Category | Cost |
|---|---:|
| Servos | $15.99 |
| Potentiometers | $9.29 |
| Power Supply | $7.59 |
| Perfboard Kit | $9.99 |
| Heat-Set Insert Kit | $14.98 |
| **Total Purchased Cost** | **$57.84** |

---

## Existing Components

| Item | Qty | Notes |
|---|---:|---|
| Arduino Uno | 1 | Main development controller |
| LCD1602 Display | 1 | Optional user interface |
| SG90 Servos | 2 | Used for early testing |
| Breadboard | 1+ | Prototyping |
| Push Buttons | 4 | Save/playback controls |
| 10k Resistors | Assorted | Button circuits |
| 1000 µF Capacitor | 1 | Servo power smoothing |
| Jumper Wires | Assorted | Male-to-male and male-to-female |
| M2-M4 Screws | Assorted | Existing hardware |

---

## Future / Optional Components

| Item | Purpose |
|---|---|
| Arduino Nano | Smaller final controller |
| Custom PCB | Cleaner final electronics |
| Bearings | Reduce joint friction |
| Wire crimp kit | Custom-length wiring |
| Rubber feet | Improve base stability |

---

## Design Notes

- MG90S servos were selected over SG90 servos because they use metal gears and are more durable.
- The project will use M3 hardware wherever possible.
- The electronics will first be prototyped on a breadboard, then transferred to perfboard.
- A 5V 3A external power supply is used because USB power is not reliable for multiple servos.
