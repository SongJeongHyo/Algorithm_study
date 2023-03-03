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

	double avr = 0.0;
	//credit * grade
	double sum = 0.0;

	for (int i = 0; i < 20; i++) {
		string lecture;
		double credit;
		string grade;

		double score;

		cin >> lecture >> credit >> grade;

		if (grade == "A+") {
			score = credit * 4.5;
		}
		else if (grade == "A0") {
			score = credit * 4.0;
		}
		else if (grade == "B+") {
			score = credit * 3.5;
		}
		else if (grade == "B0") {
			score = credit * 3.0;
		}
		else if (grade == "C+") {
			score = credit * 2.5;
		}
		else if (grade == "C0") {
			score = credit * 2.0;
		}
		else if (grade == "D+") {
			score = credit * 1.5;
		}
		else if (grade == "D0") {
			score = credit * 1.0;
		}
		else if (grade == "F") {
			score = credit * 0.0;
		}
		else {
			continue;
		}

		avr += score;

		sum += credit;

	}
	avr /= sum;

	cout.precision(7);
	cout << avr;

	return 0;
}