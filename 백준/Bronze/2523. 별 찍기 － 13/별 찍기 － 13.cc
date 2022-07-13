#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int star = 1;

	for (int  i = 0; i < N; i++){
		for (int k = 0; k < star; k++) {
			cout << "*";
		}
		cout << endl;
		star++;
	}
	star = N - 1;
	for (int i = 0; i < N - 1; i++) {
		for (int k = 0; k < star; k++) {
			cout << "*";
		}
		cout << endl;
		star--;
	}

	return 0;
}