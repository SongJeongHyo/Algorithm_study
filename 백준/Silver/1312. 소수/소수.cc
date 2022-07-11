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
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int A, B, N, result;
	cin >> A >> B >> N;

	while (N--) {
		A %= B;
		A *= 10;
		result = A / B;
	}
	cout << result;
	
	return 0;
}