#include <iostream>
#include <vector>
#define MAX 8

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	//게임의 횟수를 알아내는 문제

	int N;
	cin >> N;

	int dp[1001];

	dp[0] = 0;
	dp[1] = 1; //1
	dp[2] = 2; //1 , 1

	for (int i = 3; i <= N; i++) {
		dp[i] = min(dp[i - 1] + 1, dp[i - 3] + 1);
	}

	if (dp[N] % 2 == 1) {
		cout << "SK";
	}
	else {
		cout << "CY";
	}

	
	return 0;
}