#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <queue>
#include <stack>

using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int n;
		int mid;
		int result;
		cin >> n;

		vector<int>V(n);

		for (int j = 0; j < n; j++) {
			cin >> V[j];
		}
		sort(V.begin(), V.end());

		mid = (V[n-1] - V[0]) / 2;
		result = (mid - V[0]) + (V[n-1] - V[0]) + (V[n-1] - mid);
		
		cout << result << endl;
	}

	return 0;
}

//13 24 37 89
//
//38
//
//(38-13) + (89-13) + (89-38)
//