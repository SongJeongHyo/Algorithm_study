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
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
	int N;
	cin >> N;
	priority_queue<int>PQ;

	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;

		if (x == 0) {
			if (!PQ.empty()) {
				cout << PQ.top() << '\n';
				PQ.pop();
			}
			else {
				cout << '0' << '\n';
			}
		}
		else {
			PQ.push(x);
		}
	}

	return 0;
}