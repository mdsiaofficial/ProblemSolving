#include <chrono>
#include <iostream>

int main() {
    auto now = std::chrono::system_clock::now();
    auto now_ms = std::chrono::time_point_cast<std::chrono::milliseconds>(now);
    auto value = now_ms.time_since_epoch().count();
    std::cout << "Current timestamp: " << value << std::endl;
    return 0;
}