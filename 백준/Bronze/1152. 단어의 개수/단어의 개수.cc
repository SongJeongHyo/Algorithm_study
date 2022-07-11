#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	getline(cin, str);
	int count = 0;

	if (str[0] == ' ' || str[str.size()-1] ==  ' ') {
		count--;
	}
	if (str[0] == ' ' && str[str.size() - 1] == ' ') {
		count -= 1;
	}

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ' ') {
			count++;
		}
	}
	cout << count + 1;

	return 0;
}