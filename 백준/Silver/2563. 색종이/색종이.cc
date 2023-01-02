#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <queue>
#include <stack>
#include <deque>
#include <tuple>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	vector<vector<int> > V(100, vector<int>(100, 0));

	int N;
	int sum = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;

		for (int j = 0; j < 10; j++) {
			for (int q = 0; q < 10; q++) {
				V[a + j][b + q] = 1;
			}
		}
	}

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (V[i][j]) {
				//cout << "1 ";
				sum++;
			}
			else {
				//cout << "0 ";
			}
		}
		//cout << endl;
	}

	cout << sum;

	return 0;
}