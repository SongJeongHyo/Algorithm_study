#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int>V(N);
	int num = 1;
	for (int i = 0; i < V.size(); i++) {
		V[i] = num;
		num++;
	}
	vector<int>V1(N);
	for (int i = 0; i < V1.size(); i++) {
		int n;
		cin >> n;
		V1[i] = n;
	}
	int result = 0;
	for (int i = 0; i < V.size(); i++) {
		if (V[i] != V1[i]) {
			result++;
		}
	}
	cout << result;
	return 0;
}