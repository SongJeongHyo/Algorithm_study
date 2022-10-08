#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	int N;
	int sum = 0;
	cin >> N;
	vector<vector<int> > V(N, vector<int>(2, 0));
	vector<int>V1(N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 2; j++) {
			int num;
			cin >> num;
			V[i][j] = num;
		}
	}
	for (int i = 0; i < N; i++) {
		V1[i] = V[i][1] % V[i][0];
	}
	for (int i = 0; i < V1.size(); i++) {
		sum += V1[i];
	}
	cout << sum;
	return 0;
}