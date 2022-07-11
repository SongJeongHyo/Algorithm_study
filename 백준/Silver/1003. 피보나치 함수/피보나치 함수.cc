#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int>V1(41);
	vector<int>V2(41);

	for (int i = 2; i < V1.size(); i++) {
		V1[0] = 1;
		V1[1] = 0;

		V1[i] = V1[i - 1] + V1[i - 2];
	}
	for (int i = 2; i < V2.size(); i++) {
		V2[0] = 0;
		V2[1] = 1;

		V2[i] = V2[i - 1] + V2[i - 2];
	}
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int num;
		cin >> num;
		cout << V1[num] << " " << V2[num] << endl;
	}

	return 0;
}