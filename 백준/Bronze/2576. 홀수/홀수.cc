#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int>V(7);
	vector<int>V1(7);
	int sum = 0;
	int min = 0;
	
	for (int i = 0; i < V.size(); i++) {
		int num;
		cin >> num;
		V[i] = num;
	}
	for (int i = 0; i < V.size(); i++) {
		if (V[i] % 2 == 1) {
			V1[i] = V[i];
		}
		else {
			V1[i] = NULL;
		}
	}

	for (int i = 0; i < V1.size(); i++) { //합
		sum = sum + V1[i];
	}

	for (int i = 0; i < V1.size(); i++) {
		if (V1[i] > 0) {
			min = V1[i];
			break;
		}
	}

	for (int i = 0; i < V1.size(); i++) { //최솟값
		if (min > V1[i] && V1[i] > 0) {
			min = V1[i];
		}
	}

	if (sum == 0) {
		cout << -1;
	}
	else {
		cout << sum << endl << min;
	}

	return 0;
}