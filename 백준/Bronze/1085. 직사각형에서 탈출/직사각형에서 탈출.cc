#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <queue>
#include <stack>
#include<deque>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int x, y, w, h;
	
	cin >> x >> y >> w >> h;

	//w-x, h-y

	int w_x = w - x;
	int h_y = h - y;

	int result = min(min(x, y), min(w_x, h_y));

	cout << result;

	return 0;
}