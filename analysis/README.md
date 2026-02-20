# /analysis/

This directory contains the computational proofs and signal processing scripts for the project. 

## 📂 Folder Contents
* **`physics_baseline/`**: Scripts (Python/MATLAB) used to validate the ULA spacing ($d$) and Spatial Nyquist constraints for Milestone 1.
* **`snr_calculations/`**: Tools for quantifying the Signal-to-Noise Ratio and determining the required analog gain (dB) based on microphone sensitivity.
* **`data_captures/`**: Raw signal data (e.g., `.csv` or `.wav`) from the Rig for use in later milestones.

## 📐 Milestone 1 Requirements
Your analysis scripts must explicitly prove:
1. **Spatial Nyquist:** That your microphone spacing $d$ is $\le \frac{\lambda}{2}$ for your target frequency.
2. **Gain/Bias Logic:** That your chosen resistor values provide sufficient swing for the ADC without clipping.

## 🧪 Accepted Tools
You are encouraged to use **Python (NumPy/SciPy)** or **MATLAB**. If using Python, please include a `requirements.txt` file to ensure the TAs can run your scripts.
