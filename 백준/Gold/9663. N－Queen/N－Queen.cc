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

int N;
int answer = 0;

vector<int> visited(15);

bool Check(int qCnt) {
	for (int i = 0; i < qCnt; i++) {
		if((visited[qCnt] == visited[i]) || (qCnt - i == abs(visited[qCnt] - visited[i])))
			return 0;
	}
	return 1;
}

void N_Queen(int qCnt) {
	if (qCnt == N) {
		answer++;
		return;
	}
	for (int j = 0; j < N; j++) {
		visited[qCnt] = j;

		if (Check(qCnt)) {
			N_Queen(qCnt + 1);
		}
	}
}

int main() {
	/*ios::sync_with_stdio(false);
	cin.tie(NULL);*/

	cin >> N;
	N_Queen(0);
	cout << answer;

	return 0;
}