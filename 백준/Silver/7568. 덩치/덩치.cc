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
	
	int N;

	cin >> N;

	vector<vector<int>> V(N, vector<int>(2, 0));
	vector<int>res(N); //dp

	for (int i = 0; i < V.size(); i++) {
		cin >> V[i][0] >> V[i][1];
		res[i] = 1;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (V[i][0] < V[j][0] && V[i][1] < V[j][1]) {
				res[i]++;
			}
		}
		cout << res[i] << " ";
	}


	return 0;
}