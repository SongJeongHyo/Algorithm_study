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
	int N;
	cin >> N;

	stack<int>S;
	string str;

	for (int i = 0; i < N; i++) {
		cin >> str;

		if (str == "push") {
			int num;
			cin >> num;
			S.push(num);
		}
		else if (str == "pop") {
			if (!S.empty()) {
				cout << S.top() << endl;
				S.pop();
			}
			else {
				cout << -1 << endl;
			}
		}
		else if (str == "size") {
			cout << S.size() << endl;
		}
		else if (str == "empty") {
			if (!S.empty()) {
				cout << 0 << endl;
			}
			else {
				cout << 1 << endl;
			}
		}
		else if (str == "top") {
			if (S.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << S.top() << endl;
			}
		}
	}

	return 0;
}