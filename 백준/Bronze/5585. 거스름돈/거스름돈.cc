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

	int a = change / 500;
	int b = change - 500;
	
	int c = b / 100;
	int c1 = change / 100;
	int d = b - 100 * c;
	int d1 = change - 100 * c1;
	int e = d / 50;
	int e1 = d1 / 50;
	int f = d - 50 * e;
	int f1 = d1 - 50 * e1;
	int g = f / 10;
	int g1 = f1 / 10;
	int h = f - 10 * g;
	int h1 = f1 - 10 * g1;
	int i = h / 5;
	int i1 = h1 / 5;
	int j = h - 5 * i;
	int j1 = h1 - 5 * i1;
	int k = j / 1;
	int k1 = j1 / 1;

	if (a >= 1) {
		cnt++;
		if (c >= 1) {
			cnt += c;
		}
		if (d >= 1) {
			cnt += e;
		}
		if (g >= 1) {
			cnt += g;
		}
		if (i >= 1) {
			cnt += i;
		}
		if (k >= 1) {
			cnt += k;
		}
	}
	else {
		if (c1 >= 1) {
			cnt += c1;
		}
		if (d1 >= 1) {
			cnt += e1;
		}
		if (g1 >= 1) {
			cnt += g1;
		}
		if (i1 >= 1) {
			cnt += i1;
		}
		if (k1 >= 1) {
			cnt += k1;
		}
		
	}
	cout << cnt;
	
	return 0;
}