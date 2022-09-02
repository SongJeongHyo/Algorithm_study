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

int factorial(int a) {
	if (a == 0) {
		return 1;
	}

	int sum = 1;


	for (int i = a; i >= 1; i--) {
		sum *= i;
	}

	return sum;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, k;
	cin >> n >> k;

	int result = factorial(n) / (factorial(k) * factorial(n - k));

	cout << result;

	return 0;
}