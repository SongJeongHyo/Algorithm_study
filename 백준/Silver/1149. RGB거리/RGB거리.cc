#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#define min(a, b) (((a) < (b)) ? (a) : (b))
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<vector<int> > V(3, vector<int>(1000, 0));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 3; j++) {
			int num;
			cin >> num;
			V[j][i] = num;
		}

		if (i == 0) continue;
		V[0][i] += min(V[1][i - 1], V[2][i - 1]);
		V[1][i] += min(V[0][i - 1], V[2][i - 1]);
		V[2][i] += min(V[0][i - 1], V[1][i - 1]);
		
	}
	
	cout << min(min(V[0][N - 1], V[1][N - 1]), V[2][N - 1]);

	return 0;
}
