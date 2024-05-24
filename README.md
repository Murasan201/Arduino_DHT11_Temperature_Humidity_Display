# Arduino_DHT11_Temperature_Humidity_Display

This repository contains an Arduino sketch for measuring and displaying temperature and humidity using the DHT11 sensor and an I2C LCD1602 display.

## Hardware Required

- Arduino R4 with Renesas microcontroller
- DHT11 temperature and humidity sensor
- LCD1602 display with I2C interface
- Connecting wires

## Software Required

- Arduino IDE
- DHT library
- LiquidCrystal_I2C library

## Installation

1. Clone this repository:
    ```bash
    git clone https://github.com/yourusername/Arduino_DHT11_Temperature_Humidity_Display.git
    ```
2. Open the `DHT11_Temperature_Humidity_Display.ino` file in the Arduino IDE.
3. Install the required libraries:
    - Open the Arduino IDE.
    - Go to `Sketch` -> `Include Library` -> `Manage Libraries...`.
    - Search for `DHT` and `LiquidCrystal_I2C` and install them.
4. Connect the hardware as follows:
    - DHT11 Sensor:
        - VCC -> 5V
        - GND -> GND
        - Data -> Digital pin 2
    - LCD1602 Display:
        - VCC -> 5V
        - GND -> GND
        - SDA -> A4
        - SCL -> A5

## Usage

1. Upload the sketch to your Arduino board.
2. The LCD will display the measured temperature and humidity values. If there is an error in reading from the DHT11 sensor, it will display "Error".

## Author

Created by Murasan.

## Website

For more projects and information, visit [Murasan's website](https://murasan-net.com/).

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
