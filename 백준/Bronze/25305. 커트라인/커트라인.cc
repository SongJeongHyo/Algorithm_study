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
	
	int N, k;

	cin >> N >> k;

	vector<int>V(N);

	for (int i = 0; i < N; i++) {
		cin >> V[i];
	}

	sort(V.begin(), V.end(), greater<>());

	cout << V[k - 1];

	return 0;
}