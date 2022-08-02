#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
using namespace std;

int main() {
	int L;
	cin >> L;
	int t = 0;

	while (L != 0) {
		if (L - 5 >= 0) {
			L -= 5;
			t++;
		}
		else if (L - 4 >= 0) {
			L -= 4;
			t++;
		}
		else if (L - 3 >= 0) {
			L -= 3;
			t++;
		}
		else if (L - 2 >= 0) {
			L -= 2;
			t++;
		}
		else if (L - 1 >= 0) {
			L -= 1;
			t++;
		}
		else {
			cout << "error";
		}
	}
	cout << t;

	return 0;
}