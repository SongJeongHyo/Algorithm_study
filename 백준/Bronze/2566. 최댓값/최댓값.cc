#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<vector<int> > V(9, vector<int>(9, 0));
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			int n;
			cin >> n;
			V[i][j] = n;
		}
	}
	
	int max = V[0][0];
	int row = 0;
	int column = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (max < V[i][j]) {
				max = V[i][j];
				row = i;
				column = j;
			}
		}
	}
	cout << max << endl << row+1 << " " << column+1;

	return 0;
}