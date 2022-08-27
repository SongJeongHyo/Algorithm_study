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

using namespace std;

const int MAX = 2000;
vector<int> V[MAX];
bool visited[MAX];
int result = 0;

void dfs(int depth, int cur) {
	visited[cur] = 1;

	if (depth == 4) { //조건충족시
		result = 1;
		return;
	}

	for (auto n : V[cur]) {
		if (visited[n])
			continue;

		dfs(depth + 1, n);

		//방문한 노드면 넘어가고 아니면 dfs재귀
	}

	visited[cur] = 0; //다음으로 실행되는 dfs에 영향없게 하기 위해
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N, M;
	cin >> N >> M;

	for (int i = 0; i < M; i++) { //친구관계 입력
		int a, b;
		cin >> a >> b;
		V[a].push_back(b);
		V[b].push_back(a);
	}

	for (int i = 0; i < N; i++) { //노드 탐색
		fill(visited, visited + N + 1, 0);
		dfs(0, i);
	}

	cout << result;

	return 0;
}