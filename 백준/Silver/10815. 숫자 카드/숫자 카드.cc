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
	cin >> N;

	vector<int>V(N);

	for (int i = 0; i < V.size(); i++) {
		cin >> V[i];
	}
	sort(V.begin(), V.end());

	cin >> M;
	for (int i = 0; i < M; i++) {
		int num;
		cin >> num;

		int low = 0;
		int high = N - 1;
		bool T = false;

		while (low <= high) {
			int mid = (low + high) / 2;
			if (V[mid] == num) {
				T = true;
				break;
			}
			else if (V[mid] < num) {
				low = mid + 1;
			}
			else {
				high = mid - 1;
			}
		}

		if (T) {
			cout << 1 << " ";
		}
		else {
			cout << 0 << " ";
		}
	}



	return 0;
}