#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int A, B;
		string str;
		cin >> A;
		cin.ignore();
		cin >> B;
		cout << A + B << endl;
	}
	return 0;
}