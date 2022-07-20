#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	for (int q = 0; q < 2; q++) {
		for (int i = 0; i < n; i++) {
			for (int o = 0; o < n; o++) {
				cout << "@";
			}
			for (int j = 0; j < 3 * n; j++) {
				cout << " ";
			}
			for (int k = 0; k < n; k++) {
				cout << "@";
			}
			cout << endl;
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < 5 * n; j++) {
				cout << "@";
			}
			cout << endl;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int o = 0; o < n; o++) {
			cout << "@";
		}
		for (int j = 0; j < 3 * n; j++) {
			cout << " ";
		}
		for (int k = 0; k < n; k++) {
			cout << "@";
		}
		cout << endl;
	}

	return 0;
}