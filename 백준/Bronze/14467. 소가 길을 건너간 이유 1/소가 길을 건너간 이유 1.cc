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
	cin >> N;
	vector<vector<int> > V(11, vector<int>(2, -1));

	int res = 0;

	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;

		if (V[a][1] == -1) {
			V[a][1] = b;
		}
		else {
			if (V[a][1] != b) {
				res++;
				V[a][1] = b;
			}
		}

	}

	cout << res;

	return 0;
}