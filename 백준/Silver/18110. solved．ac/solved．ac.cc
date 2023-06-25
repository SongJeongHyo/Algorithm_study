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

	int n;
	double res = 0;
	int cnt = 0;
	cin >> n;

	if (n == 0) {
		cout << 0;
		return 0;
	}

	vector<int>V(n);
	double a = (double)n * 15 / 100;
	int ave = floor(a + 0.5);

	for (int i = 0; i < V.size(); i++) {
		cin >> V[i];
	}

	sort(V.begin(), V.end());

	for (int i = ave; i < V.size() - ave; i++) {
		res += V[i];
		cnt++;
	}

	cout << floor(res / cnt + 0.5);

	return 0;
}