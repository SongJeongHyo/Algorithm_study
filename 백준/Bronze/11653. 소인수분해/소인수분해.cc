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
	/*ios::sync_with_stdio(false);
	cin.tie(NULL);*/

	int N;
	cin >> N;

	if (N == 1) {
		return 0;
	}

	for (int i = 2; i <= N; i++) {
		while (N % i == 0) {
			cout << i << endl;

			N = N / i;
		}
	}

	return 0;
}