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

	int N, M;
	int result = 0;

	cin >> N >> M;

	set<string>S;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		S.insert(str);
	}


	for (int i = 0; i < M; i++) {
		string str;
		cin >> str;

		if (S.find(str) != S.end()) {
			result++;
		}
	}
	
	cout << result;

	return 0;
}