# EEE3088F: DoA Project Repository (Group Phase)

This repository hosts the design, analysis, and fabrication data for the **Acoustic Direction of Arrival (DoA)** project.

## 📂 Project Structure

* **`/analysis/`**: Python/MATLAB scripts for physics baselines, gain calculations, and SNR proofs.
* **`/hardware/`**: CAD project files (Schematic and PCB Layout).
* **`/hardware/production/`**: **The Manufacturing Gate.** All Gerbers, BOM, and CPL files for fabrication live here.
* **`/docs/`**: Datasheets for your selected MCU, Op-Amp, and Microphones.

## ⚖️ The "Hard Gates"

To ensure your board is accepted for manufacture, it must meet these three non-negotiable criteria:

1.  **Voltage:** Strictly **3.3V DC** (Power and I2C Logic). No 5V components.
2.  **Mechanical:** Mounting pitch must be exactly **50.0mm ± 0.2mm**.
3.  **Test Points:** All six mandatory TPs must be labeled and accessible (VCC, GND, SIGNAL, BIAS, SDA, SCL).

---

## 🛠 Submission Workflow

### **Milestone 1: Technical Contract**
1.  Perform physics baseline analysis in `/analysis/`.
2.  Submit the **Technical Contract PDF** to Gradescope.
3.  Ensure your partner is added to the Gradescope submission.

### **Milestone 2: Design for Manufacture**
1.  Complete PCB design in `/hardware/`.
2.  Export fabrication files to `/hardware/production/` (See the README in that folder for naming).
3.  Submit the **M2 Design Audit PDF** to Gradescope.
4.  Push final production files to this GitHub repository.

---

## 👥 Team
* **Student 1:** [Name/Student Number]
* **Student 2:** [Name/Student Number]
