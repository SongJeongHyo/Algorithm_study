#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int s;
		int n;
		int sum = 0;
		cin >> s >> n;
		sum += s;
		if (n != 0) {
			for (int j = 0; j < n; j++) {
				int q, p;
				cin >> q >> p;
				sum = sum + q * p;
			}
		}
		cout << sum << endl;
	}

	return 0;
}