#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int star = 1;
	int blank = N - star;

	for (int  i = 0; i < N; i++){
		for (int j = 0; j < blank; j++) {
			cout << " ";
		}
		for (int k = 0; k < star; k++) {
			cout << "*";
		}
		cout << endl;
		star++;
		blank--;
	}
	star = N - 1;
	blank = 1;
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < blank; j++) {
			cout << " ";
		}
		for (int k = 0; k < star; k++) {
			cout << "*";
		}
		cout << endl;
		star--;
		blank++;
	}

	return 0;
}