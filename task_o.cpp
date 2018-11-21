#include <iostream>
using namespace std;

int main() {
	int a, b, n, x;
	cin >>a >> b >> n;
	a = a*n;
	b = b*n;
	x = a + b/100;
	n = b%100;
	cout << x << " " << n;
	return 0;
}