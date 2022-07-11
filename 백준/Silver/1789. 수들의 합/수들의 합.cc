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
	/*ios::sync_with_stdio(false);
	cin.tie(NULL);*/
	
	long long S;
	cin >> S;

	long long sum = 0;
	long long num = 1;
	int cnt = 0;

	while (1) {
		sum += num;
		cnt++;

		if (sum > S) {
			cnt--;
			break;
		}

		num++;
	}
	cout << cnt;

	return 0;
}