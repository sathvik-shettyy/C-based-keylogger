# Keylogger Detector

## Overview

This is a simple Keylogger Detector implemented in C++. The purpose of this program is to detect potential keylogger activity on a Windows system by monitoring keyboard input for certain patterns.

## Features

- Monitors keyboard input for key pressed events.
- Detects potential keylogger activity by identifying key presses.
- Simple and beginner-level implementation.

## How It Works

The program uses the `GetKeyboardState` function from the Windows API to obtain the current state of the keyboard. It then compares the current key state with the previous key state to detect key pressed events. If a key pressed event is detected, the program prints a message indicating potential keylogger activity.

## Usage

1. Clone the repository to your local machine.
   ```sh
   git clone https://github.com/your-username/keylogger-detector.git
   ```

2. Compile the C++ code using a compatible compiler (e.g., Visual Studio, MinGW).
   ```sh
   g++ keylogger_detector.cpp -o keylogger_detector.exe
   ```

3. Run the compiled executable.
   ```sh
   ./keylogger_detector.exe
   ```

4. The program will continuously monitor the keyboard for potential keylogger activity.

## Disclaimer

This program is provided for educational purposes only. It is intended to demonstrate a simple keylogger detection technique and should be used ethically and responsibly. Be aware of legal and privacy considerations when running or distributing such tools.

## License

This project is licensed under the [MIT License](LICENSE).

Author-Sathvik Shetty
