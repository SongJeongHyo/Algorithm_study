#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int func(int p, int c, int d) {
	if (p > c) {
		return d * (p - c);
	}
	else {
		return 0;
	}
}

int main() {
	int A, B, C, D, P;
	cin >> A >> B >> C >> D >> P;

	int X = P * A;
	int Y;
	Y = func(P,C,D) + B;

	if (X > Y) {
		cout << Y;
	}
	else {
		cout << X;
	}

	//cout << "X : " << X << endl << "Y : " << Y;

	return 0;
}