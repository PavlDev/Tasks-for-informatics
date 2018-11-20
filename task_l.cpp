#include <iostream>
using namespace std;
int main() {
	int n, h, m, s;
	cin >> n;
	h = n / 60 / 60 % 24;
	m = n / 60 % 60;
	s = n % 60;
	printf("%d:%0.2d:%0.2d", h, m, s);
	system("pause");
	return 0;
}