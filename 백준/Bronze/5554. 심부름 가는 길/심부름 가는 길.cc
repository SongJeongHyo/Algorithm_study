#include <iostream>
using namespace std;

int main() {
	int A, B, C, D;
	cin >> A >> B >> C >> D;
	int sum = A + B + C + D;
	int X = sum / 60;
	int Y = sum % 60;
	cout << X << endl << Y;

	return 0;

}