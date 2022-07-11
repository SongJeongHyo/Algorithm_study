#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>

using namespace std;

int main() {
	int N;
	cin >> N;
	int result = 0;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		bool dont_overlap = true;

		for (int j = 0; j < str.size(); j++) {
			for (int k = 0; k < j; k++) {
				if (str[j] != str[j - 1] && str[j] == str[k]) {
					dont_overlap = false;
					break;
				}
			}
		}
		if (dont_overlap) {
			result++;
		}
	}
	cout << result;

	return 0;
}