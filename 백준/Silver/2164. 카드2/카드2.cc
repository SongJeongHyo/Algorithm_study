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

	queue<int>Q;
	int num = 1;
	
	for (int i = 0; i < N; i++) {
		Q.push(num);
		num++;
	}

	while (Q.size() != 1) {
		Q.pop();

		int move = Q.front();
		Q.pop();
		Q.push(move);

	}
	cout << Q.front();

	return 0;
}