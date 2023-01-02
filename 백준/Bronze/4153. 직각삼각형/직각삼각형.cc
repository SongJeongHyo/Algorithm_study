#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <queue>
#include <stack>
#include <deque>
#include <tuple>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	while (1){

		vector<int>V(3);

		cin >> V[0] >> V[1] >> V[2];

		if (V[0] == 0 && V[1] == 0 && V[2] == 0) {
			break;
		}

		int max_index = max_element(V.begin(), V.end()) - V.begin();
		
		int hypotenuse = V[max_index] * V[max_index];
		
		V.erase(V.begin() + max_index);

		int sum = V[0] * V[0] + V[1] * V[1];

		if (hypotenuse == sum) {
			cout << "right" << endl;
		}
		else {
			cout << "wrong" << endl;
		}

	}

	return 0;
}