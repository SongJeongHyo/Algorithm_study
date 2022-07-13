#include <iostream>
#include <vector>
using namespace std;

int main() {
	for (int i = 0; i < 3; i++) {
		vector<int>V(4);
		for (int i = 0; i < V.size(); i++) {
			int num;
			cin >> num;
			V[i] = num;
		}
		int b = 0;
		int d = 0;
		for (int i = 0; i < V.size(); i++) {
			if (V[i] == 0) {
				b++;
			}
			else {
				d++;
			}
		}
		if (b == 1 && d == 3) {
			cout << "A" <<endl;
		}
		else if (b == 2 && d == 2) {
			cout << "B" << endl;
		}
		else if (b == 3 && d == 1) {
			cout << "C" << endl;
		}
		else if (b == 4 && d == 0) {
			cout << "D" << endl;
		}
		else {
			cout << "E" << endl;
		}
	}
	return 0;
}