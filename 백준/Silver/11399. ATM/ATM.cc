#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int>V(N);
	for (int i = 0; i < V.size(); i++) {
		int a;
		cin >> a;
		V[i] = a;
	}
	sort(V.begin(), V.end());

	int sum = 0;
	int result = 0;
	vector<int>R(N);

	for (int i = 0; i < N; i++) {
		sum += V[i];
		R[i] = sum;
	}
	for (int i = 0; i < N; i++) {
		result += R[i];
	}
	cout << result;

	return 0;
}