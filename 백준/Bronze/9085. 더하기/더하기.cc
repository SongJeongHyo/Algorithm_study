#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int n;
		cin >> n;
		int result = 0;
		for (int j = 0; j < n; j++) {
			int num;
			cin >> num;

			result += num;
		}
		cout << result << endl;
	}

	return 0;
}