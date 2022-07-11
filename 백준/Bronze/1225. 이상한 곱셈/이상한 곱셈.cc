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
	long long sum = 0;
	string A, B;

	cin >> A >> B;

	for (int i = 0; i < A.size(); i++) {
		for (int j = 0; j < B.size(); j++){
			sum += (A[i] - '0') * (B[j] - '0');
		}
	}
	cout << sum;


	return 0;
}