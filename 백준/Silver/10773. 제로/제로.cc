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

int main() {
	int K;
	cin >> K;

	int sum = 0;

	stack<int>S;

	for (int i = 0; i < K; i++) {
		int num;
		cin >> num;
		if (num != 0) {
			S.push(num);
		}
		else {
			S.pop();
		}
	}

	while (!S.empty()) {
		sum += S.top();
		S.pop();
	}

	cout << sum;

	return 0;
}