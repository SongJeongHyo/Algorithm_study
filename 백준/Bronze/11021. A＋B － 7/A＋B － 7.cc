#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	int A,B;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		cin >> A >> B;

		cout << "Case #" << i << ": " << A+B << '\n';
	}
	return 0;
}