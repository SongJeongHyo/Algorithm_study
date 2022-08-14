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
	cin >> N >> M;

	vector<long>V(N + 1);
	V[0] = 0;

	for (int i = 1; i <= N; i++) { //누적합
		long num;
		cin >> num;
		V[i] = V[i - 1] + num;
	}

	/*for (int i = 0; i < V.size(); i++) {
		cout << "V[i] : " << V[i] << endl;
	}*/

	for (int i = 0; i < M; i++) { 
		int p, q;
		cin >> p >> q;

		cout << V[q] - V[p - 1] << '\n';
	}

	return 0;
}