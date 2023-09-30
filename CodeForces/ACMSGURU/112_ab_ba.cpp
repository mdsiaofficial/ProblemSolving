#include <iostream>
#include <cmath>
// solved the problem but not accepted with this code... i got accepted with the python code.
int main() {
    int a, b;
    std::cin >> a >> b;

    long long pa = pow(a, b);
    long long pb = pow(b, a);

    std::cout << pa - pb << std::endl;

    return 0;
}
