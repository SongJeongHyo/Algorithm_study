#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	vector<int>V(9);
	for (int i = 0; i < V.size(); i++) {
		int num;
		cin >> num;
		V[i] = num;
	}
	int sum = 0;
	for (int i = 0; i < V.size(); i++) {
		sum += V[i];
	}
	int result = sum - 100;
	int num1, num2;
	for (int i = 0; i < V.size(); i++) {
		for (int j = 1; j < V.size(); j++) {
			if (V[i] + V[j] == result) {
				num1 = V[i];
				num2 = V[j];
			}
		}
	}
	sort(V.begin(), V.end());
	for (int i = 0; i < V.size(); i++) {
		if (V[i] != num1 && V[i] != num2) {
			cout << V[i] << endl;
		}
	}
	return 0;

}