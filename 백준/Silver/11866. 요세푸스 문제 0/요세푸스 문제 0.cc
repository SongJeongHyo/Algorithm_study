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
	int N , K;
	cin >> N >> K;

	queue<int>Q;
	
	for (int i = 1; i <= N; i++) {
		Q.push(i);
	}

	int cnt = 1;
	cout << "<";
	while (!Q.empty()) {
		if (cnt % K == 0) {
			cout << Q.front();
			if (Q.size() > 1) {
				cout << ", ";
			}
			else {
				cout << ">";
			}
			Q.pop();
		}
		else {
			int move = Q.front();
			Q.pop();
			Q.push(move);
		}
		cnt++;
	}

	return 0;
}