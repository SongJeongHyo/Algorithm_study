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
#include <stdint.h>
#include <bitset>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	int res = 0;

	cin >> N >> M;

	vector<int> V(N);

	for (int i = 0; i < V.size(); i++) {
		cin >> V[i];
	}

	for (int i = 0; i < V.size() - 1; i++)
	{
		for (int j = i + 1; j < V.size(); j++)
		{
			if (V[i] + V[j] == M)
				res++;
		}
	}
	cout << res;

	return 0;
}