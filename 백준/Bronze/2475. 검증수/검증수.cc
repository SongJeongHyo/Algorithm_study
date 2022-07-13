#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int>V(6);

	for (int i = 0; i < V.size()-1; i++) {
		int num;
		cin >> num;
		V[i] = num;
	}

	V[5] = ((V[0] * V[0]) + (V[1] * V[1]) + (V[2] * V[2]) + (V[3] * V[3]) + (V[4] * V[4])) % 10;

	cout << V[5];
	return 0;
}