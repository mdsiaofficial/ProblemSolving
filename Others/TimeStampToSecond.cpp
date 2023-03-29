#include <iostream>

int main() {
    long long timestamp_ms = 1634567890123;
    long long timestamp_sec = timestamp_ms / 1000;
    std::cout << "Timestamp in seconds: " << timestamp_sec << std::endl;
    return 0;
}