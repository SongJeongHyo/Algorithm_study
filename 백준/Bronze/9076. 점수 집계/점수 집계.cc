#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		vector<int>V(5);
		int sum = 0;
		for (int j = 0; j < V.size(); j++) {
			int num;
			cin >> num;
			V[j] = num;
		}
		sort(V.begin(), V.end());
		if (V[3] - V[1] >= 4) {
			cout << "KIN" << endl;
		}
		else {
			sum = V[1] + V[2] + V[3];
			cout << sum << endl;
		}
	}
	return 0;
}