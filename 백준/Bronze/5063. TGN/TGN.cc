#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int r, e, c;
		cin >> r >> e >> c;

		if (r + c < e) {
			cout << "advertise" << endl;
		}
		else if (r + c == e) {
			cout << "does not matter" << endl;
		}
		else {
			cout << "do not advertise" << endl;
		}
	}
	return 0;
}