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

long long Array[101];

long long P(int n) {
	if (n <= 3) {
		return 1;
	}
	else if(Array[n] == 0) {
		Array[n] = P(n - 2) + P(n - 3);
	}
	return Array[n];
}

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;
		
		cout << P(N) << endl;
	}

	return 0;
}