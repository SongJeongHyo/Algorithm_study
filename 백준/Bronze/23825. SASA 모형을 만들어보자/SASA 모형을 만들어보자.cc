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
	int N, M;
	cin >> N >> M;
	int result;

	if (N <= M) {
		result = N / 2;
	}
	else {
		result = M / 2;
	}
	cout << result;

	return 0;
}