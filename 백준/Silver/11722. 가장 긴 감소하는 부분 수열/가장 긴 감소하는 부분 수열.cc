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
	int res = 0;
	cin >> N;

	vector<int>V(N);
	vector<int>dp(1001);

	for (int i = 0; i < V.size(); i++) {
		cin >> V[i];
	}

	for (int i = 0; i < N; i++) {
		dp[i] = 1;

		for (int j = 0; j < i; j++) {
			if (V[i] < V[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		res = max(res, dp[i]);
	}

	cout << res;

	return 0;
}