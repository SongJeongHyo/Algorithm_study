#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main() {
	int N;
	cin >> N;

	int blank = N-1;
	int star = 1;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < blank; j++) {
			cout << " ";
		}
		for (int r = 0; r < star; r++) {
			cout << "*";
		}
		star += 2;
		blank--;
		cout << endl;
	}

	return 0;
}