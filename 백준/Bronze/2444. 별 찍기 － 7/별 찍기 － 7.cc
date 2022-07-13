#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main() {
	int N;
	cin >> N;

	int blank1 = N - 1;
	int star1 = 1;

	for (int i = 0; i < N-1; i++) {
		for (int j = 0; j < blank1; j++) {
			cout << " ";
		}
		for (int r = 0; r < star1; r++) {
			cout << "*";
		}
		star1 += 2;
		blank1--;
		cout << endl;
	}

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