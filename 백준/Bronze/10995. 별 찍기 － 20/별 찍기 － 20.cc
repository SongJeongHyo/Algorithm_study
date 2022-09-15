#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	
	for (int i = 1; i < N+1; i++) {
		for (int j = 0; j < N; j++) {
			if (i % 2 != 0) {
				cout << "* " ;
			}
			else {
				cout << " *";
			}
		}
		cout << endl;
	}

	return 0;
}