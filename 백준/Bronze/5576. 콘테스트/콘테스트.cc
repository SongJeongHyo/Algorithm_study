#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	vector<int>W(10);
	vector<int>K(10);
	for (int i = 0; i < W.size(); i++) {
		int num;
		cin >> num;
		W[i] = num;
	}
	for (int i = 0; i < K.size(); i++) {
		int num;
		cin >> num;
		K[i] = num;
	}
	sort(W.begin(), W.end(), greater<int>());
	sort(K.begin(), K.end(), greater<int>());

	int sum_W = 0;
	int sum_K = 0;
	for (int i = 0; i < 3; i++) {
		sum_W += W[i];
		sum_K += K[i];
	}
	cout << sum_W << " " << sum_K;

	return 0;
}