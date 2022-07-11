#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <queue>
#include <stack>

using namespace std;

vector<int>V;

int binarySearch(int low, int high, int target) {
	if (low > high) {
		return 0;
	}
	else {
		int mid = (low + high) / 2;
		if (V[mid] == target) {
			return 1;
		}
		else if (V[mid] > target) {
			return binarySearch(low, mid - 1, target);
		}
		else {
			return binarySearch(mid + 1, high, target);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N, M;

	cin >> N;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		V.push_back(num);
	}

	sort(V.begin(), V.end());

	cin >> M;

	for (int i = 0; i < M; i++) {
		int num;
		cin >> num;
		cout << binarySearch(0, N - 1, num) << '\n';
	}

	return 0;
}