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
	
	int N;
	cin >> N;
	deque<int> deque;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;

		if (str == "push_back") {
			int num;
			cin >> num;
			deque.push_back(num);
		}
		else if (str == "push_front") {
			int num;
			cin >> num;
			deque.push_front(num);
		}
		else if (str == "pop_front") {
			if (!deque.empty()) {
				cout << deque.front() << endl;
				deque.pop_front();
			}
			else {
				cout << -1 << endl;
			}
		}
		else if (str == "pop_back") {
			if (!deque.empty()) {
				cout << deque.back() << endl;
				deque.pop_back();
			}
			else {
				cout << -1 << endl;
			}
		}
		else if (str == "size") {
			cout << deque.size() << endl;
		}
		else if (str == "empty") {
			if (!deque.empty()) {
				cout << 0 << endl;
			}
			else {
				cout << 1 << endl;
			}
		}
		else if (str == "front") {
			if (!deque.empty()) {
				cout << deque.front() << endl;
			}
			else {
				cout << -1 << endl;
			}
		}
		else if (str == "back") {
			if (!deque.empty()) {
				cout << deque.back() << endl;
			}
			else {
				cout << -1 << endl;
			}
		}
	}


	return 0;
}