#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int>V(N);
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		V[i] = num;
	}
	int insu = 1;
	int smallnum = 0;
	int result = 0;
	for (int i = 0; i < N; i++) {
		insu = 1;
		smallnum = 0;
		for (int j = 0; j < V[i]; j++) {
			if (V[i] % insu == 0) {
				smallnum++;
			}
			insu++;
		}
		if (smallnum == 2) {
			result++;
		}
	}
	cout << result;

	return 0;

}