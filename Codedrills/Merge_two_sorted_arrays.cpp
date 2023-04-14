#include <vector>
#include <iostream>

using namespace std;

class SortedArray {
public:
    SortedArray(const vector<int>& arr) {
        this->arr = arr;
    }

    vector<int> merge(const SortedArray& other) const {
        vector<int> result;
        int i = 0, j = 0;
        while (i < arr.size() && j < other.arr.size()) {
            if (arr[i] <= other.arr[j]) {
                result.push_back(arr[i]);
                i++;
            } else {
                result.push_back(other.arr[j]);
                j++;
            }
        }
        while (i < arr.size()) {
            result.push_back(arr[i]);
            i++;
        }
        while (j < other.arr.size()) {
            result.push_back(other.arr[j]);
            j++;
        }
        return result;
    }

private:
    vector<int> arr;
};

int main() {
    vector<int> arr1 = {1, 4, 6};
    vector<int> arr2 = {1, 5, 7};

    SortedArray sa1(arr1);
    SortedArray sa2(arr2);

    vector<int> result = sa1.merge(sa2);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
