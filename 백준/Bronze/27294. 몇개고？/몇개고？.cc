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
#include <stdint.h>
#include <bitset>
#define MAX_NODE 1000

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, S;
	cin >> T >> S;

	if (S == 1) {
		cout << 280;
	}
	else if(T <= 11 || T > 16) {
		cout << 280;
	}
	else {
		cout << 320;
	}

	
	return 0;
}