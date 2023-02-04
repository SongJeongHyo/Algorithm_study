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
#include <stdint.h>
#include <bitset>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int K;
	cin >> K;

	for (int i = 0; i < K; i++){
		int Class, max, min;
		int L_gap = 0;
		cin >> Class;

		vector<int>V(Class);

		for (int j = 0; j < Class; j++) {
			cin >> V[j];
		}

		min = *min_element(V.begin(), V.end());
		max = *max_element(V.begin(), V.end());

		sort(V.begin(), V.end(), greater<int>());

		for (int k = 0; k < V.size() - 1; k++) {
			if (L_gap < V[k] - V[k + 1]) {
				L_gap = V[k] - V[k + 1];
			}
		}

		cout << "Class " << i + 1 << endl <<
			"Max " << max << ", Min " << min <<
			", Largest gap " << L_gap << endl;
	}

	return 0;
}