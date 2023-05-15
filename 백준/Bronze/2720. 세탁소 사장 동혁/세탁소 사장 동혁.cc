#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <queue>
#include <stack>
#include <deque>
#include <tuple>
#include <stdint.h>
#include <bitset>
#include <set>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int m;
		int a = 0;
		int b = 0;
		int c = 0;
		int d = 0;
		cin >> m;

		if (m >= 25) {
			a = m / 25;
			m = m % 25;
		}
		if (m >= 10) {
			b = m / 10;
			m = m % 10;
		}
		if (m >= 5) {
			c = m / 5;
			m = m % 5;
		}
		if (m >= 1) {
			d = m / 1;
		}

		cout << a << " " << b << " " << c << " " << d << endl;
	}

	return 0;
}