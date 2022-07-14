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
	vector<int>V(3);

	for (int i = 0; i < V.size(); i++) {
		cin >> V[i];
	}
	sort(V.begin(), V.end());

	for (int i = 0; i < V.size(); i++) {
		cout << V[i] << " ";
	}
	
	return 0;
}