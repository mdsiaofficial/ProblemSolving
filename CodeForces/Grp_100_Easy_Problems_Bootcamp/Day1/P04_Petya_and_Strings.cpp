#include <iostream>
#include <string.h>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {

    char s[1001], m[1001];
    cin >> s >> m;
    transform(s, s + strlen(s), s, ::tolower);
    transform(m, m + strlen(m), m, ::tolower);
    cout << strcmp(s, m) << endl;
    return 0;
}