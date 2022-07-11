#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<vector<int> > V(N, vector<int>(2, 0));

	for (int i = 0; i < V.size(); i++) {
		int num;
		cin >> num;
		V[i][0] = num;
		V[i][1] = i;
	}
	sort(V.begin(), V.end());

	vector<vector<int> > V1(N, vector<int>(2, 0));

	for (int i = 0; i < V1.size(); i++) {
		V1[i][0] = V[i][1];
		V1[i][1] = i;
	}
	sort(V1.begin(), V1.end());

	for (int i = 0; i < V1.size(); i++) {
		cout << V1[i][1] << " ";
	}

	return 0;
}