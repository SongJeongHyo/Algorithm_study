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
/*ios_base::sync_with_stdio(false);
cin.tie(NULL);*/

int main() {
	int N;
	cin >> N;
	int han = 0;
	vector<bool>V(1001); //0으로 초기화 상태

	for (int i = 1; i <= 99; i++) {
		V[i] = true;
	}

	for (int i = 100; i < 1000; i++) {
		vector<int>V1;
		int num = i;
		while (num > 0) {
			V1.push_back(num % 10);
			num = num / 10;
		}
		int d1, d2;
		d1 = V1[0] - V1[1];
		d2 = V1[1] - V1[2];
		if (d1 == d2) {
			V[i] = true;
		}
	}

	for (int i = 1; i <= N; i++) {
		if (V[i]) {
			han++;
		}
	}
	cout << han;

	return 0;
}