#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int>V(6);
	vector<int>V1(6);
	V[0] = 1;
	V[1] = 1;
	V[2] = 2;
	V[3] = 2;
	V[4] = 2;
	V[5] = 8;
	for (int i = 0; i < V1.size(); i++) {
		int num;
		cin >> num;
		V1[i] = num;
	}
	for (int i = 0; i < V.size(); i++) {
		int result = 0;
		result = V[i] - V1[i];

		cout << result << " ";
	}


	return 0;
}