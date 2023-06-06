#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
using namespace std;

int gcd(int a, int b) {

    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}

int main() {
	int a, b;
	cin >> a >> b;

    int r1 = gcd(a, b);
    int r2 = a * b / r1;

    cout << r1 << endl << r2;

	return 0;
}

