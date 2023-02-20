#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main() {
	string str;
	cin >> str;
	cout << str[0];
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == (char)45) {
			cout << str[i + 1];
		}
	}
	return 0;
}