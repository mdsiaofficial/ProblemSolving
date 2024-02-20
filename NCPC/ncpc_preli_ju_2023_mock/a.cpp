#include <iostream>
#include <string>
using namespace std;

void printTree(int level, string prefix) {
    if (level == 0) {
        return;
    }
    cout << prefix << "o--|__" << endl;
    printTree(level - 1, prefix + "   |");
    cout << prefix << "o--|" << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        printTree(n, "");
    }
    return 0;
}
