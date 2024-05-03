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
