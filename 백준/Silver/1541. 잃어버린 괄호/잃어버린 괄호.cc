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

	// 20+50-20+40-50  + 10 - 20 + 10 + 10 + 20 + 20 - 40 - 40
	// 60, -40 

	string str;
	string temp = "";
	bool minus = 0;
	int result = 0;

	cin >> str;

	// - 나오면 뒤로 다 음수
	for (int i = 0; i <= str.size(); i++) {
		
		if (str[i] == '-' || str[i] == '+' || i == str.size()) { //연산자
			if (minus) {
				result -= stoi(temp);
				//cout << result << endl;
			}
			else {
				result += stoi(temp);
				//cout << result << endl;
			}
			temp = "";

			if (str[i] == '-') {
				minus = 1;
			}
		}
		else { //숫자
			temp += str[i];
		}

	}

	cout << result;

	return 0;
}