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

	//Z = 100 * (y / X)
	//승률이 Z + 1 이 되기 위한 추가판 수 : K 일때,
	//Z+1 = 100 * (y + k / X + k)
	//즉, K = ((Z+1) * X - 100 * y) / (99 - Z)

	double X, y;
	cin >> X >> y;

	double Z = floor(100 * y / X);

	if (Z >= 99.0) {
		cout << -1 << endl;
	}
	else {
		int res = (int)ceil((X * Z + X - 100 * y) / (99 - Z));
		cout << res << endl;
	}


	return 0;
}