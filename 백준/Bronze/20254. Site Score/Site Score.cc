#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <queue>
#include <stack>

using namespace std;

int main() {
	vector<int>V(4);
	for (int i = 0; i < V.size(); i++) {
		cin >> V[i];
	}
	int sum = V[0] * 56 + V[1] * 24 + V[2] * 14 + V[3] * 6;

	cout << sum;
	
	return 0;
}