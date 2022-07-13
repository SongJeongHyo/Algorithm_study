#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int M = N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << "*";
		}
		M--;
		cout << endl;
	}

	return 0;
}