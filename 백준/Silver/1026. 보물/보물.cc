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
	int N;
	cin >> N;
	int sum = 0;

	vector<int>A(N);
	vector<int>B(N);

	for (int i = 0; i < A.size(); i++) {
		cin >> A[i];
	}
	for (int i = 0; i < B.size(); i++) {
		cin >> B[i];
	}

	sort(A.begin(), A.end());
	sort(B.begin(), B.end(), greater<int>());

	for (int i = 0; i <A.size(); i++) {
		sum += A[i] * B[i]; 
	}

	cout << sum;

	return 0;
}