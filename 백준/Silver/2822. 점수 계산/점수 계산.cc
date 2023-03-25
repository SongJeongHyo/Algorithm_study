#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <queue>
#include <stack>
#include<deque>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	vector<vector<int> > V(8, vector<int>(2, 0));
	vector<int>V2(5);
	int sum = 0;

	for (int i = 0; i < 8; i++) {
		int num;
		cin >> num;
		V[i][0] = num;

		V[i][1] = i + 1;
	}

	sort(V.begin(), V.end() , greater<>());

	/*for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 2; j++) {
			cout << V[i][j] << " ";
		}
		cout << endl;
	}*/


	for (int i = 0; i < 5; i++) {
		sum += V[i][0];
	}

	cout << sum << endl;

	for (int i = 0; i < 5; i++) {
		V2[i] = V[i][1];
	}

	sort(V2.begin(), V2.end());

	for (int i = 0; i < V2.size(); i++) {
		cout << V2[i] << " ";
	}

	return 0;
}