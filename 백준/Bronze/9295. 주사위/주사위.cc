#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	for (int i = 0; i < T; i++) {
		int a, b;
		int result = 0;
		cin >> a >> b;

		result = a + b;

		cout << "Case " << i + 1 << ": " << result << endl;
	}

	return 0;
}