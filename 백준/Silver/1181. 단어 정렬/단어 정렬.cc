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

bool compare(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}

	return a.length() < b.length();
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	bool overlap = false;
	cin >> N;
	vector<string>V;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		overlap = false;

		for (int j = 0; j < V.size(); j++) {
			if (V[j] == str) {
				overlap = true;
			}
		}

		if (!overlap)
			V.push_back(str);
	}

	sort(V.begin(), V.end(), compare);

	for (int i = 0; i < V.size(); i++) {
		cout << V[i] << '\n';
	}

	return 0;
}