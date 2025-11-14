#include <iostream>
#include <vector>

int count = 0;

int sub_array(int x, std::vector<int>& array) {
    if (array.size() == 0) {
        return count;
    }

    std::vector<int> new_array;
    int i = 0;
    while (i < x) {
        if (std::all_of(array.begin(), array.end(), [&](int j) { return j == array[0]; })) {
            // Do nothing
        } else {
            count++;
        }
        new_array.push_back(array.back());
        array.pop_back();
        i++;
    }
    new_array.pop_back();

    return sub_array(x - 1, new_array);
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
        std::cout << "Case " << i << ": " << sub_array(x, array) << std::endl;
    }
    return 0;
}
