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

	vector<string>V(5);

	string str;

	for (int i = 0; i < V.size(); i++) {
		cin >> V[i];

		V[i].resize(15);
	}

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if (V[j][i] != NULL) {
				str.push_back(V[j][i]);
			}
		}
	}

	cout << str;

	return 0;
}