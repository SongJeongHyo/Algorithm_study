#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <queue>
#include <stack>

using namespace std;

int main() {
	string str;
	cin >> str;

	if (str[0] == '5' && str[1] == '5' && str[2] == '5') {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	
	return 0;
}