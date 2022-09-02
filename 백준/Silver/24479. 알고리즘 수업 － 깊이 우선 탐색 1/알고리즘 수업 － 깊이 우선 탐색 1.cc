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

int cnt = 0;
vector<int> arr[100001];
int result[100001];
bool visited[100001];
queue<int>Q;

void DFS(int V) {

	if (visited[V] == 1)
		return;

	visited[V] = 1;
	cnt++;
	result[V] = cnt;

	int N, M, R;
	for (int i = 0; i < arr[V].size(); i++) {
		DFS(arr[V][i]); //재귀
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N, M, R;

	cin >> N >> M >> R;
	// N: 정점의 개수, M: 간선의 개수

	for (int i = 1; i <= M; i++) {
		int a, b;
		cin >> a >> b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	
	//for (int i = 1; i <= N; i++) { //초기화
	//	if (visited[i] == 0){
	//		DFS(i);
	//	}
	//}
	//cout << cnt;

	for (int i = 1; i <= N; i++) {
		sort(arr[i].begin(), arr[i].end());
	}

	DFS(R);
	for (int i = 1; i <= N; i++) {
		cout << result[i] << '\n';
	}

	return 0;
}