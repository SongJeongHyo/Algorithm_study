#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int sum = 0;

	vector<int>V(N);
	for (int i = 0; i < V.size(); i++) {
		bool cute = true;
		cin >> cute;
		V[i] = cute;
		if (cute) {
			sum++;
		}
	}
	if (sum > N / 2) {
		cout << "Junhee is cute!";
	}
	else {
		cout << "Junhee is not cute!";
	}

	return 0;
}