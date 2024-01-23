# Keylogger Detector - Documentation

## Table of Contents

- [Overview](#overview)
- [Features](#features)
- [How It Works](#how-it-works)
- [Usage](#usage)
- [Disclaimer](#disclaimer)
- [License](#license)

## Overview

The Keylogger Detector is a simple C++ program designed to detect potential keylogger activity on a Windows system. It achieves this by monitoring keyboard input for key pressed events and identifying patterns indicative of keylogger behavior.

## Features

1. **Keyboard Input Monitoring:**
   - The program uses the `GetKeyboardState` function from the Windows API to obtain the current state of the keyboard.

2. **Key Press Detection:**
   - Key pressed events are detected by comparing the current key state with the previous key state.

3. **Simple and Beginner-Level Implementation:**
   - The implementation is kept simple for educational purposes, making it suitable for beginners interested in understanding basic keylogger detection techniques.

## How It Works

1. **Initialization:**
   - The program initializes by setting up a monitoring interval and arrays to store the previous and current key states.

2. **Keylogger Detection:**
   - In the main loop, the program continuously calls the `detectKeylogger` function.
   - The `detectKeylogger` function monitors the keyboard for key pressed events and prints a message if potential keylogger activity is detected.

3. **Monitoring Interval:**
   - The monitoring interval is set to 1000 milliseconds (1 second) by default. This interval can be adjusted based on user preferences.

## Usage

1. **Clone the Repository:**
   ```sh
   git clone https://github.com/your-username/keylogger-detector.git
   ```

2. **Compile the Code:**
   - Compile the C++ code using a compatible compiler (e.g., Visual Studio, MinGW).
     ```sh
     g++ keylogger_detector.cpp -o keylogger_detector.exe
     ```

3. **Run the Executable:**
   - Run the compiled executable.
     ```sh
     ./keylogger_detector.exe
     ```

4. **Monitor for Activity:**
   - The program will continuously monitor the keyboard for potential keylogger activity.

## Disclaimer

This program is provided for educational purposes only. It is intended to demonstrate a simple keylogger detection technique and should be used ethically and responsibly. Users should be aware of legal and privacy considerations when running or distributing such tools.

## License

This project is licensed under the [MIT License](LICENSE).

-Author: Sathvik shetty