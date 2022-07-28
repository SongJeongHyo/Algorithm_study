#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int>V(N);
	for (int i = 0; i < V.size(); i++) {
		int num;
		cin >> num;
		V[i] = num;
	}
	sort(V.begin(), V.end());
	cout << V[N - 1] - V[0];

	return 0;
}