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

	int N, X;
	int min = 999999999;
	int index = 0;
	cin >> N >> X;

	vector<int>V(N);

	for (int i = 0; i < N; i++) {
		cin >> V[i];
	}

	for (int i = 0; i < N - 1; i++) {
		if (min > abs(V[i] * X + V[i + 1] * X)) {
			min = abs(V[i] * X + V[i + 1] * X);
			index = i;
		}
	}

	int res = V[index] * X + V[index + 1] * X;

	cout << res;

	return 0;
}