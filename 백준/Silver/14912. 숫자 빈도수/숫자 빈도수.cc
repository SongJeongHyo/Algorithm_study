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
	
	int n, d;
	int result = 0;

	cin >> n >> d;

	for (int i = 1; i <= n; i++) {

		int num = i;

		while (num > 0) {
			if (num % 10 == d) {
				result++;
			}

			num /= 10;
		}
	}

	cout << result;

	return 0;
}