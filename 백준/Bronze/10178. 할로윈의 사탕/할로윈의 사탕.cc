#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int c, v;
		cin >> c >> v;
		int result = 0;
		int d = 0;

		result = c / v;
		d = c % v;

		cout << "You get " << result << " piece(s) and your dad gets "
			<< d << " piece(s)." << endl;
	}

	return 0;
}