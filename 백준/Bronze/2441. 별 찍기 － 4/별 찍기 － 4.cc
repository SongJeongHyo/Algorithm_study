#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int M = N;
	int Z = 0;

	for (int i = 0; i < N; i++) {
		for (int r = 0; r < Z; r++) {
			cout << " ";
		}
		for (int j = 0; j < M; j++) {
			cout << "*";
		}
		Z++;
		M--;
		cout << endl;
	}

	return 0;
}