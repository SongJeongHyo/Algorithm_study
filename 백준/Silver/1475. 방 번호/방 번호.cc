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
	
	string str;
	cin >> str;

	vector<int>V(10, 0);

	for (int i = 0; i < str.size(); i++) {
		V[str[i] - '0']++;
	}

	int maxx = 0;

	for (int i = 0; i < V.size(); i++) {
		if (i != 9 && i != 6) {
			maxx = max(maxx, V[i]);
		}
	}

	cout << max(maxx, (V[6] + V[9] + 1) / 2);

	return 0;
}