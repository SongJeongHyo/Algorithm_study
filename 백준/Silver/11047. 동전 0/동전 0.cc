#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;

	vector<int>V(10);
	for (int i = 0; i < V.size(); i++) {
		int a;
		cin >> a;
		V[i] = a;
	}

	sort(V.begin(), V.end(), greater<int>());

	int coin = K;
	int result = 0;

	for (int i = 0; i < V.size(); i++) {
		if (coin >= V[i]) {
			int a = coin / V[i];

			result += coin / V[i];
			coin = coin - a * V[i];
		}
	}
	cout << result;

	return 0;
}