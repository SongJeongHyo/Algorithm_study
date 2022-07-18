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
	int T;
	cin >> T;

	stack<char>S;
	string str;


	for (int i = 0; i < T; i++) {
		cin >> str;
		if (str.front() == '(') {
			bool b = true;
			for (int j = 0; j < str.size(); j++) {
				char s;
				s = str[j];
				if (s == '(') {
					S.push(s);
				}
				else {
					if (!S.empty()) {
						S.pop();
					}
					else {
						cout << "NO" << endl;
						b = false;
						break;
					}
				}
			}
			if (S.empty() && b==1) {
				cout << "YES" << endl;
			}
			else if (!S.empty() && b == 1) {
				cout << "NO" << endl;
			}
		}
		else {
			cout << "NO" << endl;
			continue;
		}

		while (!S.empty())
			S.pop();
	}

	return 0;

}