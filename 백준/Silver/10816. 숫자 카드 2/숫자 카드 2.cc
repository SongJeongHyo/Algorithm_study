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
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int N, M, cnt;
	cin >> N;
	vector<int>V(N);

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		V[i] = num;
	}

	sort(V.begin(), V.end());

	cin >> M;

	for (int i = 0; i < M; i++) {
		int num;
		cin >> num;
		
		cnt = upper_bound(V.begin(), V.end(), num) -
			lower_bound(V.begin(), V.end(), num);

		cout << cnt << " ";
	}

	return 0;
}