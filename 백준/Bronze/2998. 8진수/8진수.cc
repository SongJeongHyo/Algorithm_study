#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int func(int a, int b, int c) {
 	if (a == '0' && b == '0' && c == '0') {
		return 0;
	}
	else if (a == '0' && b == '0' && c == '1') {
		return 1;
	}
	else if (a == '0' && b == '1' && c == '0') {
		return 2;
	}
	else if (a == '0' && b == '1' && c == '1') {
		return 3;
	}
	else if (a == '1' && b == '0' && c == '0') {
		return 4;
	}
	else if (a == '1' && b == '0' && c == '1') {
		return 5;
	}
	else if (a == '1' && b == '1' && c == '0') {
		return 6;
	}
	else{
		return 7;
	}
}

int main() {
	string str;
	cin >> str;

	if (str.size() % 3 == 1) {
		str.insert(0, "00");
	}
	else if (str.size() % 3 == 2) {
		str.insert(0, "0");
	}
	for (int i = 0; i < str.size(); i += 3) {
		int result;
		//cout << str[i] << " " << str[i + 1] << " " << str[i + 2] << endl;
		result = func(str[i], str[i + 1], str[i + 2]);
		cout << result;
	}
	return 0;
}