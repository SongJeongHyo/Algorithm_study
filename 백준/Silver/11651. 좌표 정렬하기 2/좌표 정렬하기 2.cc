#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<vector<int> > V(N, vector<int>(2, 0));
	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		V[i][0] = b;
		V[i][1] = a;
	}

	sort(V.begin(), V.end());

	for (int i = 0; i < V.size(); i++) {
		int temp = V[i][0];
		V[i][0] = V[i][1];
		V[i][1] = temp;
	}

	for (int i = 0; i < V.size(); i++) {
		for (int j = 0; j < 2; j++) {
			//cout << V[i][j] << " ";
			printf("%d ", V[i][j]);
		}
		//cout << endl;
		printf("\n");
	}

	return 0;
}