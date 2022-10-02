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
	
	int num;
	cin >> num;

	int a = 0;
	int b = 1;
	int sum;

	if (num == 0) {
		cout << 0;
	}
	else if (num == 1) {
		cout << 1;
	}
	else {
		for (int i = 2; i <= num; i++) {
			sum = a + b;

		//cout << sum << " ";
			a = b;
			b = sum;
		}
		cout << sum;
	}

	return 0;
}