# Atlas V1 Engineering Analysis

This folder documents the pre-manufacturing engineering analysis for Atlas V1.

## Analysis Baseline

The analysis is based on a frozen copy of the final Atlas V1 mechanical assembly.

- Revision: Atlas V1 Analysis Baseline
- Status: Mechanical design frozen for analysis
- CAD software: SolidWorks
- Purpose: Evaluate mass, joint torque, structural loading, and design safety before full printing

## Analysis Order

1. Record component masses and centers of mass
2. Calculate shoulder and elbow torque
3. Compare required torque with servo capability
4. Evaluate joint range and interference
5. Perform FEA on critical printed parts
6. Validate results through physical testing

## Analysis Configuration

All static load calculations were performed using the maximum achievable extension of the Atlas V1 mechanism.

The shoulder joint does not permit a perfectly horizontal upper arm due to mechanical interference designed into the joint. Therefore, the analysis uses the maximum reachable configuration, which represents the highest practical static loading condition for the current design.
