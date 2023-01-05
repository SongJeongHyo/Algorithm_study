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

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (1){

		string str;
		getline(cin, str); // \0까지 cin

		bool balance = true;
		stack<char> S;
		
		if (str[0] == '.' && str.length() == 1) {
			break;
		}

		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '[' || str[i] == '(') {
				S.push(str[i]);
			}

			if (str[i] == ']') {
				if (S.empty() || S.top() == '(') {
					balance = false;
				}
				else {
					S.pop();
				}
			}

			if (str[i] == ')') {
				if (S.empty() || S.top() == '[') {
					balance = false;
				}
				else {
					S.pop();
				}
			}
		}

		if (S.empty() && balance) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}

	}

	return 0;
}