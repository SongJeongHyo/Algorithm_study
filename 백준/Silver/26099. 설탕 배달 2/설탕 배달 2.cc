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

	long long n, cnt;

	cin >> n;
	cnt = 0;

	while (n >= 0) {
		if (n % 5 == 0) {
			cnt += (n / 5);
			cout << cnt << '\n';
			return 0;
		}
		else {
			cnt++;
			n -= 3;
		}
	}
	cout << -1 << '\n';

	return 0;
}