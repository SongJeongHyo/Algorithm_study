#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int A, B, V;
	cin >> A >> B >> V;
	int up = A - B;
	int daybefore = ceil((V - A) / double(up));


	if (A > V || A == V) {
		cout << 1;
	}
	else {
		cout << daybefore + 1;
	}

	return 0;
}