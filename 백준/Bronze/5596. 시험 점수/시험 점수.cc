#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	vector<int>S(4);
	vector<int>T(4);
	int S_sum = 0;
	int T_sum = 0;
	for (int i = 0; i < S.size(); i++) {
		int num;
		cin >> num;
		S[i] = num;
	}
	for (int i = 0; i < T.size(); i++) {
		int num;
		cin >> num;
		T[i] = num;
	}
	for (int i = 0; i < 4; i++) {
		S_sum += S[i];
		T_sum += T[i];
	}
	if (S_sum >= T_sum) {
		cout << S_sum;
	}
	else {
		cout << T_sum;
	}

	return 0;
}