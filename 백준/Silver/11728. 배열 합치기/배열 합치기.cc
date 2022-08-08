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
	int i = 0;
	int j = 0;
	int k = 0;

	cin >> N >> M;

	vector<int>V1(1000001);
	vector<int>V2(1000001);
	vector<int>V(2000002);

	for (int i = 0; i < N; i++) {
		cin >> V1[i];
	}
	for (int i = 0; i < M; i++) {
		cin >> V2[i];
	}

	while (i < N && j < M) { //새로운 배열에 두 배열 비교 후 작은값 넣기. k -> 포인터
		if(V1[i] < V2[j]){
			V[k++] = V1[i++];
		}
		else {
			V[k++] = V2[j++];
		}
	}

	while (i < N) {
		V[k++] = V1[i++];
	}
	while (j < M) {
		V[k++] = V2[j++];
	}

	for (int q = 0; q < N + M; q++) {
		cout << V[q] << " ";
	}

	return 0;
}