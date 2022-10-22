#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int result = 0;
	for (int i = 0; i < 5; i++) {
		int num;
		cin >> num;

		if (N == num) {
			result++;
		}
	}
	cout << result;

	return 0;
}