#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main() {
	string str;
	cin >> str;

	int JOI = 0;
	int IOI = 0;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == (char)74 && str[i + 1] == (char)79
			&& str[i + 2] == (char)73) {
			JOI++;
		}
		if (str[i] == (char)73 && str[i + 1] == (char)79
			&& str[i + 2] == (char)73) {
			IOI++;
		}
	}
	cout << JOI << endl << IOI;
	// J-74, I-73, O-79
	return 0;
}