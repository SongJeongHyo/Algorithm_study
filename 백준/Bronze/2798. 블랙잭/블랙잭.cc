#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int N,M;
	cin >> N >> M;
	vector<int>V(N);

	for (int i = 0; i < V.size(); i++) {
		int num;
		cin >> num;
		V[i] = num;
	}

	int result = 0;
	int sum = 0;
	int sun = 0;
	for (int i = 0; i < V.size() - 2; i++) {
		for (int j = i + 1; j < V.size() - 1; j++) {
			for (int k = j + 1; k < V.size(); k++) {
				sun = V[i] + V[j] + V[k];
				if (sun > sum && sun <= M) {
					if (sun == M) {
						cout << M << endl;
						return 0;
					}
					sum = sun;
					result = sum;
				}
			}
		}
	}
	cout << result;
	return 0;
}