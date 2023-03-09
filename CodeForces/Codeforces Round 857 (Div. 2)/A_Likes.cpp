#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        // Calculate the maximum and minimum number of likes at each second
        int max_likes = 0, min_likes = 0, likes = 0;
        vector<int> max_likes_list(n), min_likes_list(n);
        for (int i = 0; i < n; i++) {
            likes += b[i];
            max_likes = max(max_likes, likes);
            min_likes = min(min_likes, likes);
            max_likes_list[i] = max_likes;
            min_likes_list[i] = min_likes;
        }

        // Output the results
        for (int i = 0; i < n; i++) {
            cout << max_likes_list[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < n; i++) {
            cout << -min_likes_list[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
