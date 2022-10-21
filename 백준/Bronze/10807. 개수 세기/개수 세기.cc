#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <queue>
#include <stack>
#include<deque>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N, v;
	int sum = 0;
	vector<int>V(N);
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> V[i];
	}

	cin >> v;

	for (int i = 0; i < N; i++) {
		if (V[i] == v) {
			sum++;
		}
	}
	cout << sum;

	return 0;
}