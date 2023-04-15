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

	int X;
	cin >> X;

	vector<int>dp(X + 1);

	dp[1] = 0;

	for (int i = 2; i <= X; i++) {
		dp[i] = dp[i - 1] + 1;

		if (!(i % 3)) {
			dp[i] = min(dp[i], dp[i / 3] + 1);
		}
		if (!(i % 2)) {
			dp[i] = min(dp[i], dp[i / 2] + 1);
		}
	}

	cout << dp[X];

	return 0;
}