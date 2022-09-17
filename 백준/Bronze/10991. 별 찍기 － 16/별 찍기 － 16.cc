#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin >> T;
	int star = 1;
	int blank = T - star;
	for (int i = 0; i < T; i++) {
		for (int j = 0; j < blank; j++) {
			cout << " ";
		}
		for (int k = 0; k < star; k++) {
			cout << "* ";
		}
		star++;
		blank--;
		cout << endl;
	}
	return 0;
}