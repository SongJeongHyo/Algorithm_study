#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>

using namespace std;

int main() {
	int N;
	cin >> N;

	int result = 0;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		result += num;
	}

	result -= (N - 1);

	cout << result;

	return 0;
}