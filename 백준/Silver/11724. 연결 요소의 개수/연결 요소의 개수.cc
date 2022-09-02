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

int N, M;
int cnt = 0;
int arr[1001][1001];
bool visited[1001];
queue<int>Q;

void DFS(int V) {
	visited[V] = 1;

	for (int i = 1; i <= N; i++) {
		if (arr[V][i] == 1 && visited[i] == 0) { //연결 && 방문 0
			DFS(i); //재귀
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> N >> M ;
	// N: 정점의 개수, M: 간선의 개수

	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}

	for (int i = 1; i <= N; i++) { //초기화
		if (visited[i] == 0){
			cnt++;
			DFS(i);
		}
	}
	cout << cnt;

	return 0;
}