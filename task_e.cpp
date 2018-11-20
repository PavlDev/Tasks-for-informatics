#include <iostream>
using namespace std;

int main() {
  int s = 109, v, t;
  cin >> v >> t;
  cout << (v * t % s + s) % s;
  return 0;
}
