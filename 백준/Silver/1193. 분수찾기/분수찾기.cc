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

	int X;
	cin >> X;

	int i = 0;
	while (X > 0) {
		i++;
		X -= i;
	}// 몇 번째 대각선에 위치한지 확인.

	if (i % 2 == 1) { //홀수번째 대각선에 위치
		cout << 1 - X << "/" << i + X;
	}
	else { //짝수번째 대각선에 위치
		cout << i + X << "/" << 1 - X;
	}

	
	return 0;
}