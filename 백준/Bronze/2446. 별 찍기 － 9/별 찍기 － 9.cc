#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int star = N;
	int blank = N - star;

	int star2 = N - 1;
	//int blank2 = (N - 1) - star2;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < blank; j++) {
			cout << " ";
		}
		for (int k = 0; k < star; k++) {
			cout << "*";
		}
		for (int u = 0; u < star2; u++) {
			cout << "*";
		}
		/*for (int o = 0; o < blank2; o++) {
			cout << " ";
		}*/
		star--;
		star2--;
		blank++;
		//blank2++;

		cout << endl;
	}
	star = star +2;
	blank = N - star;

	star2 = star2 +2;
	//blank2 = (N - 1) - star2;

	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < blank; j++) {
			cout << " ";
		}
		for (int k = 0; k < star; k++) {
			cout << "*";
		}
		for (int u = 0; u < star2; u++) {
			cout << "*";
		}
		/*for (int o = 0; o < blank2; o++) {
			cout << " ";
		}*/
		star++;
		star2++;
		blank--;
		//blank2--;

		cout << endl;
	}

	return 0;
}