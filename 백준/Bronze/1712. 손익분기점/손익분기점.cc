#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	long long A, B, C;
	cin >> A >> B >> C;
	long long result = 0;

	if (B < C) {
		result = A / (C - B);
	}
	else {
		cout << -1;
		return 0;
	}
	cout << result+1;

	return 0;
}