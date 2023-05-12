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
#include <set>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int res = 1;
	cin >> N;

	vector<int>V(N);

	for (int i = 0; i < V.size(); i++) {
		cin >> V[i];
	}

	for (int i = 0; i < V.size() - 1; i++) {
		if (V[i] <= V[i + 1]) {
			res++;
		}
	}
	
	cout << res;

	return 0;
}