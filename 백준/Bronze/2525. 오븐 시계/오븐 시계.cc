#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <queue>

using namespace std;

int main() {
	int A, B, C;
	cin >> A >> B >> C;

	int hour, minute;

	if (B + C > 59) {
		int plus = (B + C) / 60;

		if (plus + A > 23) {
			hour = (plus + A) % 24;
			minute = (B + C) % 60;
		}
		else {
			hour = A + plus;
			minute = (B + C) % 60;
		}
	}
	else {
		hour = A;
		minute = B + C;
	}

	cout << hour << " " << minute;

	return 0;
}