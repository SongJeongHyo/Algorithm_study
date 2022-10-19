#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main() {
	vector<int>V(26,-1);
	string str = "abcdefghijklmnopqrstuvwxyz";

	string S;
	cin >> S;

	for (int i = 0; i < str.size(); i++) {
		int result = -1;
		for (int j = 0; j < S.size(); j++) {
			if (str[i] == S[j]) {
				result = j;
				break;
			}
		}
		V[i] = result;
		cout << V[i] << " ";
	}
	return 0;
}