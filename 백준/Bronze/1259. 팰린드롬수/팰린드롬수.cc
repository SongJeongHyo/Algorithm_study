#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <queue>
#include <stack>
#include<deque>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	while (1) {
		string str;
		string z = "0";

		cin >> str;

		string str2 = str;

		reverse(str.begin(), str.end());

		if (str == z) {
			return 0;
		}
		else {
			if (str == str2) {
				cout << "yes" << endl;
			}
			else {
				cout << "no" << endl;
			}
		}
	}

	return 0;
}