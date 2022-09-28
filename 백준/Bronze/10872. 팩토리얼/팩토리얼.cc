#include <iostream>
using namespace std;

int func(int n) {
	int sum = 1;
	for (int i = 1; i < n + 1; i++) {
		sum = sum * i;
		//cout << sum << endl;
	}
	return sum;
}

int main() {
	int N;
	cin >> N;
	int result;

	result = func(N);

	cout << result;

	return 0;
}