#include <iostream>
using namespace std;

int main() {
	int u, p, tp, tu, at, h, m;
	cin >> u;
	p = u - 1;
	tp = (p / 2 * 20) + (p % 2) * 5;
	tu = u * 45;
	at = tp + tu;
	h = at / 60;
	m = at % 60;
	cout << h + 9 << " " << m;
	return 0;
}