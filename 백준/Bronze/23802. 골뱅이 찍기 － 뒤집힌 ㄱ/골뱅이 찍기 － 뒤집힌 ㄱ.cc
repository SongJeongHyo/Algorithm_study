#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 5 * n; j++) {
			cout << "@";
		}
		cout << endl;
	}
	for (int i = 0; i < 4* n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "@";
		}
		cout << endl;
	}

	return 0;
}