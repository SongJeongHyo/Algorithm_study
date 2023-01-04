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

	int title = 666;
	int N;
	cin >> N;
	string str;

	int res = 0;

	while (1) {

		str = to_string(title);

		if (str.find("666") != string::npos) {
			res++;
		}

		if (res == N) {
			break;
		}

		title++;
	}
	cout << title;

	return 0;
}