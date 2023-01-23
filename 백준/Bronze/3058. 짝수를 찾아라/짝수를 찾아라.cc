#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		vector<int>V(7);
		for (int j = 0; j < V.size(); j++) {
			int num;
			cin >> num;
			V[j] = num;
		}
		vector<int>V1(7);
		for (int j = 0; j < V.size(); j++) {
			if (V[j] % 2 == 0) {
				V1[j] = V[j];
			}
		}
		int min = 0;
		for (int j = 0; j < V1.size(); j++) {
			if (V1[j] != 0) {
				min = V1[j];
				break;
			}
		}
		int sum = 0;
		for (int j = 0; j < V1.size(); j++) {
			sum += V1[j];
			if (min > V1[j] && V1[j]!=0) {
				min = V1[j];
			}
		}
		cout << sum << " " << min << endl;
	}

	return 0;
}