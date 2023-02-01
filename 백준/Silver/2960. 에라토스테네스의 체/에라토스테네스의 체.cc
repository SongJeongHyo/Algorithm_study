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

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	/*int a[1001];*/

	int N, K;
	int res = 0;

	cin >> N >> K;

	vector<int>V(N + 1);

	for (int i = 2; i <= N; i++) {
		V[i] = i;
	}

	for (int i = 2; i <= N; i++) {
		/*if (V[i] == 0) {
			continue;
		}*/
 		for (int j = i; j <= N; j+=i) {
			if (V[j] != 0) {

				V[j] = 0;
				res++;
				if (res == K) {
					cout << j;
					return 0;
				}
			}
		}
	}

	return 0;
}