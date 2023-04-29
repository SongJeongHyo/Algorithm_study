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
	
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int dp[10101] = {0,};
		int N,M;

		cin >> N;
		//vector<int>coin(N);
		int coin[200];

		for (int j = 1; j <= N; j++) {
			cin >> coin[j];
		}

		cin >> M;

		dp[0] = 1;

		for (int j = 1; j <= N; j++) {
			for (int k = coin[j]; k <= M; k++) {
				dp[k] = dp[k] + dp[k - coin[j]];
			}
		}

		cout << dp[M] << endl;
	}

	return 0;
}