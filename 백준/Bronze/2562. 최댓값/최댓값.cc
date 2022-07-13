#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> V(9);
	int index = 0;

	for (int i = 0; i < V.size(); i++) {
		cin >> V[i];
	}

	int Max = V[0];

	for (int i = 0; i < V.size(); i++) {
		if (Max < V[i]) {
			Max = V[i];
			index = i;
		}

	}
	cout << Max << endl << index+1;

	return 0;
}