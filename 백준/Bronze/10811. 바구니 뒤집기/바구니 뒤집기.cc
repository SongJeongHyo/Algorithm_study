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

	int N, M;
	cin >> N >> M;

	vector<int>V(N);

	int num = 1;

	for (int i = 0; i < V.size(); i++) {
		V[i] = num;
		num++;
	}

	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;

		reverse(V.begin() + a - 1, V.begin() + b);
	}

	for (int i = 0; i < V.size(); i++) {
		cout << V[i] << " ";
	}

	return 0;
}