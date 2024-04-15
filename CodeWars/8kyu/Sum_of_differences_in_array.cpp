#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// using array
int sumofdiff(int arr[], int n){
    sort(arr, arr+n);
    reverse(arr, arr+n);
    
    // for(int i =0 ; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }

    int sum=0;
    for(int i=0; i<n-1; i++){
        sum += arr[i] - arr[i+1];
    }

    return sum;
}

// using vector
int sumOfDifferences(const vector<int>& arr){
    vector<int> result = arr;
    int n = arr.size();
    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());

    // sort(arr.begin(), arr.end(), greater<int>());

    int sum=0;
    for(int i=0; i<n-1; i++){
        sum += result[i] - result[i+1];
    }

    return sum;
}

int main() {
    
    int arr[] = {2,5,1,3,7};
    vector<int>arrrr = {2,5,1,3,7};
    cout<<sumOfDifferences(arrrr);

    return 0;
}
