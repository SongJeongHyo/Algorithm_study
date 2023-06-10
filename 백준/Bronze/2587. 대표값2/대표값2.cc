#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <queue>

using namespace std;

int main() {
	vector<int>V(5);
	int sum = 0;
	int ave = 0;
	int mid = 0;

	for (int i = 0; i < V.size(); i++) {
		int num;
		cin >> num;
		V[i] = num;
	}

	for (int i = 0; i < V.size(); i++) {
		sum += V[i];
	}

	ave = sum / 5;

	sort(V.begin(), V.end());

	mid = V[2];

	cout << ave << endl << mid;
	
	return 0;
}