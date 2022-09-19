#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main() {
	string str;
	cin >> str;
	int num = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
			num++;
		}
	}
	cout << num;
	return 0;
}