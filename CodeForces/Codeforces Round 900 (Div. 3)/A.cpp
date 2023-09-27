#include <iostream>
#include <vector>
#include <map>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        map<int, int> count;
        int maxCount = 0;
        int left = 0;
        string result = "NO";
        
        for (int right = 0; right < n; right++) {
            count[a[right]]++;
            maxCount = max(maxCount, count[a[right]]);
            
            if (right - left + 1 > maxCount) {
                count[a[left]]--;
                left++;
            }
            
            if (right - left + 1 == maxCount && count[k] > 0) {
                result = "YES";
                break;
            }
        }
        
        cout << result << endl;
    }
    
    return 0;
}