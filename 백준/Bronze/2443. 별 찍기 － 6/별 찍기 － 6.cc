#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int star = 2*N -1;
	int blank = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < blank; j++) {
			cout << " ";
		}
		for (int r = 0; r < star; r++) {
			cout << "*";
		}
		blank++;
		star -= 2;
		cout << endl;
	}

	return 0;
}