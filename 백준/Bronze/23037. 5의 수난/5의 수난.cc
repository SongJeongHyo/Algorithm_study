#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <queue>
#include <stack>

using namespace std;

int main() {
	vector<int>V(5);
	int sum = 0;
	int num;
	cin >> num;

	for (int i = 0; i < 5; i++) {
		V[i] = num % 10;
		num /= 10;
	}

	for (int i = 0; i < 5; i++) {
		sum += V[i]* V[i] * V[i] * V[i] * V[i] ;
	}
	cout << sum;

	return 0;
}