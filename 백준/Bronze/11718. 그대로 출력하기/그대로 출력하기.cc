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
	while (1) {
		getline(cin, str);
		
		if (str == "") {
			break;
		}
		cout << str << endl;
	}

	return 0;
 }

