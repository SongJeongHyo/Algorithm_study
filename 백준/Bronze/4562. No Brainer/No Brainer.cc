#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <stack>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<vector<int> > V(n, vector<int>(2, 0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++) {
			int num;
			cin >> num;
			V[i][j] = num;
		}
	}
	for (int i = 0; i < n; i++) {
		if (V[i][0] < V[i][1]) {
			cout << "NO BRAINS" << endl;
		}
		else {
			cout << "MMM BRAINS" << endl;
		}
	}
	return 0;
 }

