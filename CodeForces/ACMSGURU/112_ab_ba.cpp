#include <iostream>
#include <cmath>

int main() {
    int a, b;
    std::cin >> a >> b;

    long long pa = pow(a, b);
    long long pb = pow(b, a);

    std::cout << pa - pb << std::endl;

    return 0;
}
