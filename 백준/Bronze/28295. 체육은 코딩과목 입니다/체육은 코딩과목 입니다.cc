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

	int res = 0;

	for (int i = 0; i < 10; i++) {
		int num;
		cin >> num;
		if (num == 1) {
			res = (res + 1) % 4;
		}
		else if (num == 2) {
			res = (res + 2) % 4;
		}
		else {
			res = (res + 3) % 4;
		}

		//cout << res << endl;
	}

	if (res == 0) {
		cout << "N";
	}
	else if (res == 1) {
		cout << "E";
	}
	else if (res == 2) {
		cout << "S";
	}
	else {
		cout << "W";
	}

	return 0;
}