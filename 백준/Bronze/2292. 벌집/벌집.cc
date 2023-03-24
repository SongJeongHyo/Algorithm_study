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
	
	int N;
	cin >> N;
	
	int i = 1;
	int cnt = 1;

	if (N == 1) {
		cout << 1;
		return 0;
	}
	else {
		while (N > i) {
			i += (6 * cnt);
			cnt++;
		}
	}
	cout << cnt;

	return 0;
}