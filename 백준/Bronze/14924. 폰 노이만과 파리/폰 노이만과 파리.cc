#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int S, T, D;
	cin >> S >> T >> D;

	int h = 0;
	h = D / (S * 2);
	int result = h * T;

	cout << result;

	return 0;
}