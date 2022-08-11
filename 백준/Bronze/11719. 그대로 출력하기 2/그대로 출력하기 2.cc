#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <stack>
using namespace std;

int main() {
	string str;
	int num = 0;
	while (!cin.eof() && num<100) {
		getline(cin, str);
		
		cout << str << endl;

		num++;
	}

	return 0;
 }

