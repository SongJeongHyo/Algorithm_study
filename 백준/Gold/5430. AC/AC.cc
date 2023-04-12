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
#include <set>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		deque<int>DQ;
		string func, str;
		int size;
		bool Reverse = 0;
		bool Error = 0;

		cin >> func >> size >> str;

		int j = 1;
		while (str[j] != '\0') { //숫자(str) 입력
			int x = 0;
			while (str[j] > 47 && str[j] < 58) {
				x *= 10;
				x += int(str[j] - '0');
				j++;
			}
			if (x != 0) {
				DQ.push_back(x);
			}
			j++;
		}

		/*for (int q = 0; q < DQ.size(); q++) {
			cout << DQ[q] << " " ;
		}
		cout << endl;*/

		j = 0;
		while (func[j] != '\0') { //func 처리
			if (func[j] == 'R') {
				Reverse = !Reverse;
			}
			else if (func[j] == 'D') {
				if (DQ.empty()) {
					cout << "error" << endl;
					Error = true;
					break;
				}
				if (Reverse) {
					DQ.pop_back();
				}
				else {
					DQ.pop_front();
				}
			}
			j++;
		}

		if (!Error) {
			cout << "[";
		}
		while (!DQ.empty()) {
			if (!Reverse) {
				cout << DQ.front();
				DQ.pop_front();
			}
			else {
				cout << DQ.back();
				DQ.pop_back();
			}
			if (!DQ.empty()) {
				cout << ",";
			}
		}
		if (!Error) {
			cout << "]" << endl;
		}
	}

	return 0;
}