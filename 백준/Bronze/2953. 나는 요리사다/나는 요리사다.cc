#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main() {
	vector<vector<int> > V(5, vector<int>(4, 0));
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			int n;
			cin >> n;
			V[i][j] = n;
		}
	}
	int max = 0;
	int sum = 0;

	for (int i = 0; i < 4; i++) {
		sum = sum + V[0][i];
		
	}
	int row = 1;
	for (int i = 1; i < 5; i++) {
		int sum1 = 0;
		for (int j = 0; j < 4; j++) {
			sum1 = sum1 + V[i][j];
		}
		if (sum1 > sum) {
			sum = sum1;
			row = i+1;
		}
	}

	cout << row << " " << sum;
	return 0;
}