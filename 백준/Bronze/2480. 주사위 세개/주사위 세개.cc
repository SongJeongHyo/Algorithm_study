#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	if (a == b && b == c && c == a) {
		cout << 10000 + (a * 1000);
	}
	else if(a==b && b!=c) {
		cout << 1000 + (a * 100);
	}
	else if (a != b && b == c) {
		cout << 1000 + (b * 100);
	}
	else if (a == c && b != c) {
		cout << 1000 + (c * 100);
	}
	else {
		cout << max(max(a, b),c) * 100;
	}

	return 0;
}