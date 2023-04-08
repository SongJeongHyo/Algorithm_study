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


	int N;
	cin >> N;
	vector<int>dp(N + 1, 9999);

	dp[3] = 1;
	dp[5] = 1;

	for (int i = 6; i <= N; i++) {
		dp[i] = min(dp[i - 5] + 1, dp[i - 3] + 1);
	}

	if (dp[N] >= 9999) {
		cout << "-1\n";
	}
	else {
		cout << dp[N] << '\n';
	}
	return 0;
}