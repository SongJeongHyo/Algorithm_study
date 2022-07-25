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
    cin.tie(0);
    cin.sync_with_stdio(0);
    
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
				cout << Q.front() << '\n';
				Q.pop();
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (str == "size") {
			cout << Q.size() << '\n';
		}
		else if (str == "empty") {
			if (!Q.empty()) {
				cout << 0 << '\n';
			}
			else {
				cout << 1 << '\n';
			}
		}
		else if (str == "front") {
			if (!Q.empty()) {
				cout << Q.front() << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (str == "back") {
			if (!Q.empty()) {
				cout << Q.back() << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}
	}

	return 0;
}