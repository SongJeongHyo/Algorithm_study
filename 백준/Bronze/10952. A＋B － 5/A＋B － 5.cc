#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int A = 1;
	int B = 1;
	
	while (A != 0 && B != 0) {
		cin >> A >> B;
		if (A == 0 && B == 0) {
			break;
		}
		cout << A + B << '\n';
	}
	
	return 0;
}