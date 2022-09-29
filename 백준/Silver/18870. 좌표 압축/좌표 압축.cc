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
	
	int N;
	cin >> N;

	vector<int>V1(N);
	vector<int>V2(N);


	for (int i = 0; i < V1.size(); i++) {
		int num;
		cin >> num;
		V1[i] = V2[i] = num;
	}

	sort(V2.begin(), V2.end());

	V2.erase(unique(V2.begin(), V2.end()), V2.end()); //중복원소 erase

	for (int i = 0; i < N; i++) {
		auto index = lower_bound(V2.begin(), V2.end(), V1[i]) - V2.begin();
	
		cout << index << " ";
	}

	return 0;
}