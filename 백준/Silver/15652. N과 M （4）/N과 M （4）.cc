#include <iostream>
#include <vector>
#define MAX 8

using namespace std;

int N, M;
int arr[MAX];
bool visited[MAX];
vector<int>V;

void dfs(int cnt, int idx) {
	if (cnt == M) {
		for (int i = 0; i < V.size(); i++) {
			cout << V[i] << " ";
		}
		cout << endl;
		return;
	}
	for (int i = idx; i < N; i++) {
		/*if (visited[i]) {
			continue;
		}*/
		visited[i] = 1;
		V.push_back(arr[i]);
		dfs(cnt + 1, i);
		V.pop_back();
		visited[i] = 0;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		arr[i] = i + 1;
		visited[i] = 0;
	}

	dfs(0, 0);

	return 0;
}