#include <iostream>
#include <algorithm>
using namespace std;

int max_bananas(int a, int b, int c) {
    // Sort the integers in ascending order
    vector<int> nums = {a, b, c};
    sort(nums.begin(), nums.end());
    
    // Increment the smallest integer by 1, up to 5 times
    for (int i = 0; i < 5 && nums[0] < 10; i++) {
        nums[0]++;
    }
    for (int i = 0; i < 5 && nums[0] < 10; i++) {
        nums[1]++;
    }

    // Calculate the final product
    return nums[0] * nums[1] * nums[2];
}

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << max_bananas(a, b, c) << endl;
    }
    
    return 0;
}