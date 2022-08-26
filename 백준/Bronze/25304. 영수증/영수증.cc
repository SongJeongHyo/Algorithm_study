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
	
	int X, N;
	int sum = 0;

	cin >> X >> N;

	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;

		sum += a * b;

	}

	if (sum == X) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}

	return 0;
}