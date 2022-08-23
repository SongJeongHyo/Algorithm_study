#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <stack>
using namespace std;

int main() {
	int T;
	cin >> T;
	int result = 0;

	vector<int>V(5);
	for (int i = 0; i < V.size(); i++) {
		int num;
		cin >> num;
		V[i] = num;
	}
	for (int i = 0; i < V.size(); i++){
		if (T == V[i]) {
			result++;
		}
	}
	cout << result;

	return 0;
 }

