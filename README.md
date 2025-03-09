# Smart Water Heater Controller

## Overview
The **Smart Water Heater Controller** is an embedded system project developed using an **AVR Microcontroller**. The system allows users to set a desired water temperature, and the controller heats the water until the specified temperature is reached. Once the target temperature is achieved, the system automatically turns off. If powered off and turned back on, it will resume heating to the last set temperature, offering convenience and energy savings.

### Features:
- User-defined temperature setting for the water heater
- Real-time temperature display on a **4-Digit 7-Segment Display**
- **Temperature Sensor** for accurate measurement and control
- Saves the last set temperature, ensuring consistency after power cycles
- Simulated and tested using **Proteus** for virtual verification
- Designed with **KeCad** for circuit schematic creation

## Technologies Used:
- **AVR Microcontroller** (e.g., ATmega series)
- **Temperature Sensor** (e.g., LM35, DHT11)
- **4-Digit 7-Segment Display** for displaying the temperature
- **KeCad** for circuit design and PCB creation
- **Proteus Simulation** for hardware simulation and testing

## Components:
- **AVR Microcontroller** (ATmega or similar)
- **4-Digit 7-Segment Display**
- **Temperature Sensor** (LM35 or any equivalent)
- **Relay** for controlling the water heater
- **Resistors, Capacitors, and other basic components** for circuit connections

## Installation & Setup:
1. Clone the repository to your local machine:
    ```bash
    git clone https://github.com/your-username/Smart-Water-Heater-Controller.git
    ```

2. Open the project in your preferred IDE (e.g., **AVR Studio**, **Arduino IDE**, etc.) and upload the firmware to your AVR microcontroller.

3. Design and simulate the circuit in **Proteus** or use **KeCad** to design a PCB if required.

4. Connect the components:
   - The **temperature sensor** should be connected to the appropriate analog input of the microcontroller.
   - The **7-segment display** should be connected to digital outputs.
   - The **relay** should be connected to control the power supply of the water heater.

## Usage:
- Set your desired water temperature using the temperature control interface.
- The system will automatically start heating the water until the specified temperature is achieved.
- Once the water reaches the set temperature, the system turns off.
- After the next power cycle, the system resumes heating at the last set temperature.

## Contributing:
Feel free to fork this repository, open issues, or submit pull requests if you have improvements or suggestions for this project!


## Contact:
- **LinkedIn**: [Your LinkedIn Profile](https://www.linkedin.com/in/rangam-sundram/)
- **Email**: rangamkumarsundram@gmail.com

