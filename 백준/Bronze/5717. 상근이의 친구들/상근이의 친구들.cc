#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int M, F;
	int result;
	for (int i = 0; ; i++) {
		cin >> M >> F;
		result = M + F;
		if (result == 0) {
			break;
		}
		cout << result << endl;
	}

	return 0;
}