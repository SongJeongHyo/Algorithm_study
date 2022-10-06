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
	queue<int>Q;
	string str;
	
	for (int i = 0; i < N; i++) {
		cin >> str;

		if (str == "push") {
			int num;
			cin >> num;
			Q.push(num);
		}
		else if (str == "pop") {
			if (!Q.empty()) {
				cout << Q.front() << endl;
				Q.pop();
			}
			else {
				cout << "-1" << endl;
			}
		}
		else if (str == "size") {
			cout << Q.size() << endl;
		}
		else if (str == "empty") {
			if (!Q.empty()) {
				cout << "0" << endl;
			}
			else {
				cout << "1" << endl;
			}
		}
		else if (str == "front") {
			if (!Q.empty()) {
				cout << Q.front() << endl;
			}
			else {
				cout << "-1" << endl;
			}
		}
		else if (str == "back") {
			if (!Q.empty()) {
				cout << Q.back() << endl;
			}
			else {
				cout << "-1" << endl;
			}
		}
	}

	return 0;
}