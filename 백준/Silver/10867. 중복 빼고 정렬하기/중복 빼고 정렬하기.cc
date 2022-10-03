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
	int N;
	cin >> N;

	vector<int>V(N);
	vector<int>V_index(2005);
	vector<int>V_result;

	for (int i = 0; i < V.size(); i++) {
		cin >> V[i];
	}

	for (int i = 0; i < V.size(); i++) {
		if (V[i] >= 0) {
			V_index[V[i]]++;
		}
		else { //음수일때
			V_index[1000 - V[i]]++;
		}
	}

	for (int i = 0; i < V_index.size(); i++) {
		if (V_index[i] > 0) {
			if (i <= 1000) {
				V_result.push_back(i);
			}
			else {
				V_result.push_back(-1*(i-1000));
			}
		}
	}

	sort(V_result.begin(), V_result.end());

	for (int i = 0; i < V_result.size(); i++) {
		cout << V_result[i] << " ";
	}

	return 0;
}