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
	
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		double x1, y1, r1, x2, y2, r2 ;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		double distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

		if (distance < abs(r1 - r2) || distance > r1 + r2) {
			cout << 0 << endl;
		}
		else if (x1 == x2 && y1 == y2 && r1 == r2) {
			cout << -1 << endl;
		}
		else if (distance == r1 + r2 || distance == abs(r1 - r2)) {
			cout << 1 << endl;
		}
		else if (abs(r1 - r2) < distance < r1 + r2) {
			cout << 2 << endl;
		}
		
	}
	return 0;
}