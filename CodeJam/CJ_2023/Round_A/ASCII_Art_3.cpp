#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        long long N;
        cin >> N;
        int i = 1;
        while (i * 26 < N) {
            N -= i * 26;
            i++;
        }
        int groupIndex = (N - 1) / i;
        int letterIndex = (N - 1) % i;
        char letter = 'A' + letterIndex;
        cout << "Case #" << t << ": " << letter << endl;
    }
    return 0;
}