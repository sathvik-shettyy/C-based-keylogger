#include <iostream>
#include <windows.h>

bool detectKeylogger() {
    // Monitoring interval in milliseconds
    const int monitoringInterval = 1000;

    // Previous and current key states
    static BYTE previousKeyState[256] = {0};
    BYTE currentKeyState[256] = {0};

    // Get the current key state
    GetKeyboardState(currentKeyState);

    // Check for changes in key states
    for (int i = 0; i < 256; ++i) {
        if ((currentKeyState[i] & 0x80) && !(previousKeyState[i] & 0x80)) {
            // Key pressed event detected
            std::cout << "Potential keylogger activity detected! Key pressed: " << i << std::endl;
            return true;
        }
    }

    // Update the previous key state for the next iteration
    memcpy(previousKeyState, currentKeyState, sizeof(currentKeyState));

    // No keylogger activity detected
    return false;
}

int main() {
    std::cout << "Keylogger Detector Running..." << std::endl;

    // Main loop
    while (true) {
        if (detectKeylogger()) {
            std::cout << "Exiting due to potential keylogger activity." << std::endl;
            break;
        }

        // Sleep for the monitoring interval
        Sleep(1000);
    }

    return 0;
}
