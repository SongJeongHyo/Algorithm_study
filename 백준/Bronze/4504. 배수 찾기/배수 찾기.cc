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
	int n, num;
	cin >> n;

	while (1) {
		cin >> num;
		if (num == 0)
			break;
		else {
			if (num % n == 0) {
				cout << num << " is a multiple of " << n << "." << endl;
			}
			else {
				cout << num << " is NOT a multiple of " << n << "." << endl;
			}
		}
	}

	return 0;
}