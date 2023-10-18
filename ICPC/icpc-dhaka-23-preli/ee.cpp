#include <iostream>
#include <vector>
using namespace std;
int count = 0;

int subArray(int x, std::vector<int>& array) {
    if (array.size() == 0) {
        return count;
    }

    std::vector<int> newArray;
    int i = 0;

    while (i < x) {
        if (std::all_of(array.begin(), array.end(), [&array](int j) { return j == array[0]; })) {
            // Do nothing
        } else {
            count++;
        }

        newArray.push_back(array.back());
        array.pop_back();
        i++;
    }

    newArray.pop_back();
    return subArray(x - 1, newArray);
}

int main() {
    int t;
    std::cin >> t;

    for (int i = 1; i <= t; i++) {
        int x;
        std::cin >> x;

        std::vector<int> array(x);
        for (int j = 0; j < x; j++) {
            std::cin >> array[j];
        }

        count = 0;
        std::cout << "Case " << i << ": " << subArray(x, array) << std::endl;
    }

    return 0;
}
