#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	int score = 1;
	int result = 0;
	cin >> N;
	vector<bool>OX(N);
	vector<int>V(N);
	for (int i = 0; i < OX.size(); i++) {
		bool T = true;
		cin >> T;
		OX[i] = T;
	}
	for (int i = 0; i < V.size(); i++) {
		if (OX[i] == true) {
			V[i] = score;
			score++;
		}
		else {
			V[i] = 0;
			score = 1;
		}
	}
	for (int i = 0; i < V.size(); i++) {
		result += V[i];
	}
	cout << result;
	return 0;
}