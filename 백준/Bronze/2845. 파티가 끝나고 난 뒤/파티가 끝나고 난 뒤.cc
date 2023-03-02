#include <iostream>
#include <vector>
using namespace std;

int main() {
	int L;
	int P;
	cin >> L >> P;
	vector<int>V(5);
	int result = L * P;

	for (int i = 0; i < V.size(); i++) {
		int v;
		cin >> v;
		V[i] = v;
	}
	for (int i = 0; i < V.size(); i++) {
		cout << V[i] - result << endl;
	}

	return 0;
}