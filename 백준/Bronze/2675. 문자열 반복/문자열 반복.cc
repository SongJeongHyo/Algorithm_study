#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int num;
		cin >> num;

		string S;
		cin >> S;

		for (int j = 0; j < S.size(); j++) {
			for (int h = 0; h < num; h++) {
				cout << S[j];
			}
		}
		cout << endl;
	}
	return 0;
}