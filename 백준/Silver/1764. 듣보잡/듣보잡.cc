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
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N, M;
	cin >> N >> M;
	string s;

	vector<string>V1, V2;

	for (int i = 0; i < N; i++) {
		cin >> s;
		V1.push_back(s);
	}
	sort(V1.begin(), V1.end());

	for (int i = 0; i < M; i++) {
		cin >> s;
		if (binary_search(V1.begin(), V1.end(), s)) {
			V2.push_back(s);
		}
	}

	sort(V2.begin(), V2.end());

	cout << V2.size() << endl;

	for (const auto& element : V2)
		cout << element << endl;

	return 0;
}