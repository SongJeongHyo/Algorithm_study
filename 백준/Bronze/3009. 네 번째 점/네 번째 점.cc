#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
using namespace std;

int main() {
	vector<vector<int> > V(3, vector<int>(2, 0));
	vector<int>V1(2);
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			int a;
			cin >> a;
			V[i][j] = a;
		}
	}

	if (V[0][0] != V[1][0] && V[0][0] != V[2][0]) {
		V1[0] = V[0][0];
	}
	else if (V[1][0] != V[0][0] && V[1][0] != V[2][0]) {
		V1[0] = V[1][0];
	}
	else {
		V1[0] = V[2][0];
	}

	if (V[0][1] != V[1][1] && V[0][1] != V[2][1]) {
		V1[1] = V[0][1];
	}
	else if (V[1][1] != V[0][1] && V[1][1] != V[2][1]) {
		V1[1] = V[1][1];
	}
	else {
		V1[1] = V[2][1];
	}

	cout << V1[0] << " " << V1[1];

	return 0;
}