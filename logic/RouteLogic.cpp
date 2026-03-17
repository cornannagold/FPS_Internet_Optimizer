#include "Optimizer.hpp"
#include <windows.h>
#include <iostream>

bool Optimizer::CheckGameProcess() {
    // Simulated check for popular game windows
    HWND gameWnd = FindWindowA(NULL, "VALORANT  ");
    if (!gameWnd) gameWnd = FindWindowA(NULL, "Counter-Strike 2");
    
    return (gameWnd != NULL);
}

void Optimizer::ApplyRoutingFix() {
    std::cout << "[*] Selecting optimal route via premium nodes..." << std::endl;
    // Simulated routing logic
    std::cout << "[+] Route established: Frankfurt-1 -> GameServer (Latency: 12ms)" << std::endl;
}