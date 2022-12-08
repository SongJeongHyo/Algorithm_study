#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
using namespace std;

int main() {
	int youngest, middle;

	cin >> youngest >> middle;

	int min = middle - youngest;

	cout << middle + min;

	return 0;
}