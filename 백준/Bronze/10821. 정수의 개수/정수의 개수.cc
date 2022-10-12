#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main() {
	string str;
	cin >> str;

	int num = 1;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ',') {
			num++;
		}
	}
	cout << num;

	return 0;
}