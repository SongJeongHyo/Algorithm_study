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

	int m, change;
	int cnt = 0;
	cin >> m;
	change = 1000 - m;

	if (change >= 500) {
		cnt++;
		change -= 500;
	}

	if (change >= 100) {
		while (change >= 100)
		{
			cnt++;
			change -= 100;
		}
	}

	if (change >= 50) {
		cnt++;
		change -= 50;
	}

	if (change >= 10) {
		while (change >= 10)
		{
			cnt++;
			change -= 10;
		}
	}
	
	if (change >= 5) {
		cnt++;
		change -= 5;
	}

	if (change >= 1) {
		while (change >= 1)
		{
			cnt++;
			change -= 1;
		}
	}

	cout << cnt;

	return 0;
}