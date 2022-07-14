#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main() {
	vector<int>V(8);
	vector<int>V1(8);
	vector<int>Q(8);
	int num = 1;
	int num1 = 8;

	for (int i = 0; i < V.size(); i++) {
		V[i] = num;
		num++;
	}
	for (int i = 0; i < V1.size(); i++) {
		V1[i] = num1;
		num1--;
	}
	
	for (int i = 0; i < Q.size(); i++) {
		int a;
		cin >> a;
		Q[i] = a;
	}

	bool y = true;
	for (int j = 0; j < 8; j++) {
		if (V[j] == Q[j]) {
			y = true;
		}
		else {
			y = false;
			break;
		}
	}
	if (y == true) {
		cout << "ascending";
		return 0;
	}

	y = true;
	for (int j = 0; j < 8; j++) {
		if (V1[j] == Q[j]) {
			y = true;
		}
		else {
			y = false;
			break;
		}
	}
	if (y == true) {
		cout << "descending";
		return 0;
	}

	cout << "mixed";

	return 0;
}