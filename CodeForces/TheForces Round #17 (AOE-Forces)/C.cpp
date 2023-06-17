#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int countDivisors(int num) {
    int divisors = 0;
    for (int i = 1; i * i <= num; i++) {
        if (num % i == 0) {
            // Counting divisors in pairs
            if (i * i == num)
                divisors++;
            else
                divisors += 2;
        }
    }
    return divisors;
}

int countGoodSubarrays(vector<int>& arr) {
    int n = arr.size();
    vector<int> prefixProduct(n + 1, 1);
    for (int i = 0; i < n; i++) {
        prefixProduct[i + 1] = prefixProduct[i] * arr[i];
    }

    unordered_map<int, int> countDivs;
    int goodSubarrays = 0;

    for (int i = 0; i <= n; i++) {
        int divs = countDivisors(prefixProduct[i]);
        goodSubarrays += countDivs[divs];
        countDivs[divs]++;
    }

    return goodSubarrays;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int result = countGoodSubarrays(arr);
        cout << result << endl;
    }

    return 0;
}
