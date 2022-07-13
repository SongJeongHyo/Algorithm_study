#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int j = 0; j < T; j++) {
		vector<int>V(10);
		for (int i = 0; i < V.size(); i++) {
			int num;
			cin >> num;
			V[i] = num;
		}
		sort(V.begin(), V.end());
		cout << V[7] << endl;
	}

	return 0;
}