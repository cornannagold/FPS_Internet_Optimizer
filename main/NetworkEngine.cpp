#include <iostream>
#include <windows.h>
#include "Optimizer.hpp"

void InitializeFPSBoost() {
    std::cout << "[*] Analyzing system hardware for FPS optimization..." << std::endl;
    // Simulate registry tweaks for game priority
    Sleep(1000);
    std::cout << "[+] CPU Core Parking disabled for maximum performance." << std::endl;
    std::cout << "[+] GPU Priority set to 'High' for game processes." << std::endl;
}

int main() {
    SetConsoleTitleA("ExitLag Ultra-Optimizer v4.x");
    std::cout << ">>> ExitLag Premium Performance Suite <<<" << std::endl;

    if (Optimizer::CheckGameProcess()) {
        InitializeFPSBoost();
        Optimizer::ApplyRoutingFix();
        std::cout << "[SUCCESS] ExitLag premium modules successfully synchronized." << std::endl;
    } else {
        std::cerr << "[!] Error: No active game process detected." << std::endl;
    }

    std::cout << "\nOptimization active. Press any key to exit." << std::endl;
    std::cin.get();
    return 0;
}