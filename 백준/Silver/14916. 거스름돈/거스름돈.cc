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

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	//n = 1,3 

	if ((n % 5) % 2 == 0) { //5로 나누어 지고, 2로 나누어 질 때
		cout << (n / 5) + (n % 5) / 2;
	}
	else if (n / 5 == 0) { 
		cout << "-1";
	}
	else {
		cout << (n / 5) + ((n % 5 + 5) / 2) - 1;
	}



	return 0;
}