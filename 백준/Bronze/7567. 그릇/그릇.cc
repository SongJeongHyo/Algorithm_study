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
	
	string str;
	cin >> str;

	int sum = 10;

	for (int i = 1; i < str.size(); i++) {
		if (str[i] != str[i - 1]) {
			sum += 10;
		}
		else {
			sum += 5;
		}
	}
	cout << sum;

	return 0;
}