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

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int dp[10001] = {0,};
	int coin[110];
	
	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		cin >> coin[i];
	}

	dp[0] = 1;
	
	for (int i = 1; i <= n; i++){
		for (int j = coin[i]; j <= k; j++){
			dp[j] = dp[j] + dp[j - coin[i]];
		}
	}

	cout << dp[k] << endl;

	return 0;
}