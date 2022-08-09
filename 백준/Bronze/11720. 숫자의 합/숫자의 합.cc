#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main() {
	int N = 0;
	cin >> N;
	
	string str;
	cin >> str;

	
	int result = 0;
		
	for (int i = 0; i < str.size(); i++) {
		int num = 0;
		num = str[i] - '0';

		result += num;

		//cout << str[i] << endl;
	}
	cout << result;

	return 0;
}