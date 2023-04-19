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
const int MOD = 1000000;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int dp[5001] = {1,1};
	string str;
	cin >> str;

	int N = str.size();

	if (str[0] == '0') {
		cout << 0;
		return 0;
	}

	dp[0] = 1;
	dp[1] = 1;

	for (int i = 2; i <= N; i++) {
		if (str[i - 1] > '0') {
			dp[i] = dp[i - 1] % MOD;
		}
		
		int num = (str[i - 2] - '0') * 10 + (str[i - 1] - '0');

		if (num >= 10 && num <= 26) {
			dp[i] = (dp[i] + dp[i - 2]) % MOD;
		}
	}
	cout << dp[N];

	return 0;
}