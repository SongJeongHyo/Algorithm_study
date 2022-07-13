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
	int T, N, M;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> N >> M ;
		int cnt = 0;

		queue <pair<int, int>> Q;
		priority_queue<int>PQ;
		
		for (int j = 0; j < N; j++) {
			int num;
			cin >> num;
			Q.push({j, num});
			PQ.push(num);
		}
		while (!Q.empty()) {
			int index = Q.front().first;
			int ipt = Q.front().second;

			Q.pop();

			if (PQ.top() == ipt) {
				PQ.pop();
				cnt++;
				if (index == M) {
					cout << cnt << endl;
					break;
				}
			}
			else {
				Q.push({ index,ipt });
			}
		}
	}
	return 0;
}