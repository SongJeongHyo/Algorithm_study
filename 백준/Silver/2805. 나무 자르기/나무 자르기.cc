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
	
	long long N, M, mid, sum;
	long long max = 0;
	cin >> N >> M;

	vector<long long>V(N);

	for (int i = 0; i < N; i++) {
		cin >> V[i];
	}

	sort(V.begin(), V.end());

	long long start = 0;
	long long end = V[N - 1];

	while (start <= end) { //binary search
		sum = 0;
		mid = (start + end) / 2;

		for (int i = 0; i < N; i++) {
			if (V[i] - mid > 0) {
				sum += V[i] - mid; //자른 나무들 길이의 합
			}
		}

		if (sum >= M) {
			start = mid + 1;

			if (mid > max) {
				max = mid;
			}
		}
		else {
			end = mid - 1;
		}

	}

	cout << max;

	return 0;
}