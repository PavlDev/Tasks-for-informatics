#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int v, t, s;
	cin >> v >> t;
	if (v >= 0){
	    s = v*t%109;
	}    
	else if ( v < 0){
	    s = abs(109 + v*t);
	}    
	cout << s;
	

	return 0;
}
