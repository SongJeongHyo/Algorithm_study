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
/*ios_base::sync_with_stdio(false);
cin.tie(NULL);*/

int main() {
	int N;
	cin >> N;

	double first;
	int second, third, fourth;
	int sum = 0;

	vector<double>V(N);
	vector<int>V1(18001);

	for (int i = 0; i < V.size(); i++) {
		cin >> V[i];
	}

	for (int i = 0; i < V.size(); i++) {
		sum += V[i];
	}

	first = round((double)sum / (double)N);
	if (first == -0) {
		first = 0;
	}

	sort(V.begin(), V.end());

	second = V[V.size() / 2];

	int max = 0;
	for (int i = 0; i < V.size(); i++) {
		if (V[i] >= 0) {
			V1[V[i]]++;
			if (V1[V[i]] > max) {
				max = V1[V[i]];
			}
		}
		else {
			V1[4000 - V[i]]++;
			if (V1[4000 - V[i]] > max) {
				max = V1[4000 - V[i]];
			}
		}
	}

	vector<int>V2;
	for (int i = 0; i < V1.size(); i++) {
		if (V1[i] == max) {
			if (i <= 4000) {
				V2.push_back(i);
			}
			else {
				V2.push_back(-1*(i-4000));
			}
		}
	}
	sort(V2.begin(), V2.end());
	if (V2.size() > 1) 
		third = V2[1];
	else 
		third = V2[0];
	fourth = V[V.size()-1] - V[0];

	cout << first << endl << second << endl << third  << endl << fourth;

	return 0;
}