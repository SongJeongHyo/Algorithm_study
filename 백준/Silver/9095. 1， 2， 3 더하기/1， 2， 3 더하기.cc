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
	
	vector<int>dp(12);

	for (int i = 0; i < T; i++) {
		int n;
		cin >> n;

		dp[1] = 1;
		dp[2] = 2;
		dp[3] = 4;

		for (int j = 4; j < dp.size(); j++) {
			dp[j] = dp[j - 3] + dp[j - 2] + dp[j - 1];
		}

		cout << dp[n] << endl;
	}

	return 0;
}