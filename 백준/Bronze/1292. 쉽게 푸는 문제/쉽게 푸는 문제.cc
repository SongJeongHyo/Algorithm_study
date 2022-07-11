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
	/*ios::sync_with_stdio(false);
	cin.tie(NULL);*/
	
	int A, B;
	cin >> A >> B;
	int sum = 0;
	
	vector<int>V;

	for (int i = 1; i <= B; i++) {

		for (int j = i; j >0; j--) {
			V.push_back(i);
		}
	}

	for (int i = A -1; i < B; i++) {
		sum += V[i];
	}

	cout << sum;

	return 0;
}