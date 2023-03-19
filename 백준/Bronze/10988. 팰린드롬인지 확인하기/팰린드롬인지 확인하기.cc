#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <queue>
#include <stack>
#include <deque>
#include <tuple>
#include <stdint.h>
#include <bitset>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str1,str2;
	cin >> str1;

	str2 = str1;

	reverse(str1.begin(), str1.end());
	
	if (str1 == str2) {
		cout << 1;
	}
	else {
		cout << 0;
	}

	return 0;
}