#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

long long count_letters(int i, char letter) {
    if (i == 0) return 1;
    long long cnt = pow(2, i-1);
    if (letter != 'A') cnt *= 2;
    return cnt;
}

char get_nth_letter(long long n) {
    long long i = 0;
    char letter = 'A';
    while (true) {
        long long cnt = count_letters(i, letter);
        if (n <= cnt) break;
        n -= cnt;
        letter++;
        if (letter > 'Z') {
            letter = 'A';
            i++;
        }
    }
    return letter + (n-1) / count_letters(i, letter/2);
}

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        long long N;
        cin >> N;
        cout << "Case #" << t << ": " << get_nth_letter(N) << endl;
    }
    return 0;
}
