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
	int N;
	cin >> N;

	vector<pair <string, int>> V;

	int min = 5;

	for (int i = 0; i < N; i++) {
		int num;
		string str;
		cin >> str >> num;
		V.push_back(make_pair(str, num));

		if (min > num) {
			min = num;
		}
	}
	for (int i = 0; i < N; i++) {
		if (V[i].second == min) {
			cout << V[i].first;
		}
	}

	return 0;
}