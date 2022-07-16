#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main() {
	string str;
	cin >> str;
	int time = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'A' || str[i] == 'B' || str[i] == 'C') {
			time += 3;
		}
		else if (str[i] == 'D' || str[i] == 'E' || str[i] == 'F') {
			time += 4;
		}
		else if (str[i] == 'G' || str[i] == 'H' || str[i] == 'I') {
			time += 5;
		}
		else if (str[i] == 'J' || str[i] == 'K' || str[i] == 'L') {
			time += 6;
		}
		else if (str[i] == 'M' || str[i] == 'N' || str[i] == 'O') {
			time += 7;
		}
		else if (str[i] == 'P' || str[i] == 'Q' || str[i] == 'R' || str[i] == 'S') {
			time += 8;
		}
		else if (str[i] == 'T' || str[i] == 'U' || str[i] == 'V') {
			time += 9;
		}
		else{
			time += 10;
		}
	}
	cout << time;
	return 0;
}