#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <stack>
using namespace std;

int main() {
	int A, B;

	while (1) {
		cin >> A >> B;

		if (A == 0 && B == 0) {
			break;
		}

		if (A > B) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}


	return 0;
 }

