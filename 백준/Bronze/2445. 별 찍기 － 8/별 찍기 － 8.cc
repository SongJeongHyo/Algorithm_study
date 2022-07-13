#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int star = 1;
	int blank = N - star;

	int star2 = 1;
	int blank2 = N - star2;

	for (int i = 0; i < N; i++){
		for (int j = 0; j < star; j++) {
			cout << "*";
		}
		for (int k = 0; k < blank; k++) {
			cout << " ";
		}
		star++;
		blank--;

		for (int u = 0; u < blank2; u++) {
			cout << " ";
		}
		for (int t = 0; t < star2; t++) {
			cout << "*";
		}
		star2++;
		blank2--;

		cout << endl;
	}

	int star3 = N - 1;
	int blank3 = 1;

	int star4 = N - 1;
	int blank4 = 1;

	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < star3; j++) {
			cout << "*";
		}
		for (int k = 0; k < blank3; k++) {
			cout << " ";
		}
		star3--;
		blank3++;

		for (int u = 0; u < blank4; u++) {
			cout << " ";
		}
		for (int t = 0; t < star4; t++) {
			cout << "*";
		}
		star4--;
		blank4++;
		
		cout << endl;
	}
	return 0;
}