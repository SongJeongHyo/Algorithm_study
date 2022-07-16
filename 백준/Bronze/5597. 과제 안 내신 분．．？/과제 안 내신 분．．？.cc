#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int>V(30);
	vector<int>V1(28);
	int num = 1;
	
	for (int i = 0; i < V.size(); i++) {
		V[i] = num;
		num += 1;
	}
	
	for (int i = 0; i < V1.size(); i++) {
		int a;
		cin >> a;
		V1[i] = a;
	}

	for (int i = 0; i < V.size(); i++) {
		bool y = false;
		for (int j = 0; j < V1.size(); j++) {
			if (V[i] == V1[j]) {
				y = true;
			}
		}
		if (y == false) {
			cout << V[i] << endl;
		}
	}

	return 0;
}