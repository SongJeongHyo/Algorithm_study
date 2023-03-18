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

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t[1000] = { 0 };
	int p[1000] = { 0 };
	int dp[1000] = { 0 };

	int N, prev;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> t[i] >> p[i];
	}

	//마지막 날 부터
	for (int i = N; i > 0; i--) {
		prev = i + t[i];

		if (prev > N + 1) { //i + (i 번째 잡힌 상담 일수)가 n+1을 넘으면 일을 할 수 없음
			dp[i] = dp[i + 1];
		}
		else {
			dp[i] = max(dp[i + 1], dp[prev] + p[i]);
			//i 번째 날에 잡힌 상담을 하는 경우: 
			//DP[i] = DP[ i + (i 번째 날에 잡힌 상담 일수)] + (i 번째 날에 잡힌 상담의 금액)
		}

	}

	cout << dp[1];

	return 0;
}