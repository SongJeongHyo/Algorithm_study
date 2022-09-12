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
	
	int T, N, M;
	cin >> T;
	
	for (int i = 0; i < T; i++) {

		long long result = 1;
		int temp = 1;

		cin >> N >> M;

		for (int j = M; j > M - N; j--) {
			result *= j;
			result /= temp++;
		}
		cout << result << '\n';
	}



	return 0;
}