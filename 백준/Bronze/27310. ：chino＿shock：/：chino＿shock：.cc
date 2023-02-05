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

	string str;
	cin >> str;

	int length = str.size();
	int col = 0;
	int un = 0;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ':') {
			col++;
		}
		if (str[i] == '_') {
			un++;
		}
	}

	cout << length + col + un * 5;

	return 0;
}