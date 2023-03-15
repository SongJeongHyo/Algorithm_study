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

	int N, M, K;
	cin >> N >> M;

	vector<vector<int> > V(N, vector<int>(M, 0));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> V[i][j];
		}
	}

	cin >> K;

	for (int i = 0; i < K; i++) {
		int a, b, c, d;
		int sum = 0;
		cin >> a >> b >> c >> d;

		for (int j = a - 1; j < c; j++) {
			for (int q = b - 1 ; q < d; q++) {
				//1 1 2 2
				// 0, 01/ 1, 01
				sum += V[j][q];
			}
		}
		cout << sum << endl;
	}
	


	return 0;
}