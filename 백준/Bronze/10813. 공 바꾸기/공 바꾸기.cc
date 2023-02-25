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

	for (int i = 0; i < V.size(); i++) {
		V[i] = i + 1;
	}

	for (int i = 0; i < M; i++) {
		int a, b, temp;
		cin >> a >> b;

		temp = V[a -1];
		V[a - 1] = V[b - 1];
		V[b - 1] = temp;
	}

	for (int i = 0; i < V.size(); i++) {
		cout << V[i] << " ";
	}

	return 0;
}