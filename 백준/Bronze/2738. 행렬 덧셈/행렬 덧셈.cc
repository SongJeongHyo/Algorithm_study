#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<vector<int> > V1(N, vector<int>(M, 0));
	vector<vector<int> > V2(N, vector<int>(M, 0));
	vector<vector<int> > V3(N, vector<int>(M, 0));
	for (int i = 0; i < N; i++) { //V1 vector scan
		for (int j = 0; j < M; j++) {
			int num;
			cin >> num;
			V1[i][j] = num;
		}
	}
	for (int i = 0; i < N; i++) { //V2 vector scan
		for (int j = 0; j < M; j++) {
			int num;
			cin >> num;
			V2[i][j] = num;
		}
	}
	for (int i = 0; i < N; i++) { //V3 vector scan(plus V1 and V2), print
		for (int j = 0; j < M; j++) {
			V3[i][j] = V1[i][j] + V2[i][j];
			cout << V3[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}