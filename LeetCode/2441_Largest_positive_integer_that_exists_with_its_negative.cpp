#include <iostream>
using namespace std;
bool triangle, segment;

void calc(int a, int b, int c) {
  if (a < b + c && b < a + c && c < a + b) {
    triangle = true;
    return;
  }

  if (a <= b + c && b <= a + c && c <= a + b) {
    segment = true;
    return;
  }
}
class Solution {
public:
    int findMaxK(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = n-1; i >= 0; i--) {
            if (nums[i] > 0 && binary_search(nums.begin(), nums.end(), -nums[i])) {
                return nums[i];
            }
        }
        return -1;  // If no such pair found
    }
};

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  calc(a, b, c);
  calc(a, b, d);
  calc(a, c, d);
  calc(b, c, d);

  if (triangle) {
    cout << "TRIANGLE";
  } else if (segment) {
    cout << "SEGMENT";
  } else {
    cout << "IMPOSSIBLE";
  }
}
