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
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 2; j++) {
			int num;
			cin >> num;
			V[i][j] = num;
		}
	}
	sort(V.begin(), V.end());

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 2; j++) {
			//cout << V[i][j] << " ";
			printf("%d ", V[i][j]);
		}
		//cout << endl;
		printf("\n");
	}

	return 0;
}

