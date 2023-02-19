#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main() {
	string str1 ,str2;
	cin >> str1 >> str2;
	
	for (int i = 0; i < str1.size(); i++) {
		int num = str1[0];
		str1[0] = str1[2];
		str1[2] = num;

		int num1 = str2[0];
		str2[0] = str2[2];
		str2[2] = num1;
	}
	if (str1 > str2) {
		cout << str1;
	}
	else {
		cout << str2;
	}

	return 0;
}