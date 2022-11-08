#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int chang = 100;
	int sang = 100;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		if (a > b) {
			sang -= a;
		}
		else if (a < b) {
			chang -= b;
		}
	}
	cout << chang << endl << sang;

	return 0;
}