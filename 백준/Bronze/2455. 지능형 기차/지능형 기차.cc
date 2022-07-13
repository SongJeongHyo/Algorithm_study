#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	vector<int>V(4);
	int sum = 0;
	int max = 0;
	for (int i = 0; i < V.size(); i++) {
		int A, B;
		cin >> A >> B;

		sum = sum - A + B;
		if (sum > max) {
			max = sum;
		}
	}
	cout << max;

	return 0;

}