#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	long long A = 0;
	long long B = 1;

	long long result = 0;
	if (n == 0) {
		result = 0;
	}
	else if (n == 1) {
		result = 1;
	}
	else {
		for (int i = 0; i < n - 1; i++) {
			result = A + B;
			A = B;
			B = result;
			//cout << i+2 << "번째: " << result << endl;
		}
	}
	cout << result;

	return 0;

}