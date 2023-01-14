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

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int K, N;
	long long arr[10001];
	long long maxlan = 0;

	cin >> K >> N;

	for (int i = 0; i < K; i++)
	{
		cin >> arr[i];
		maxlan = max(maxlan, arr[i]);
	}

	long long low = 1;
	long long high = maxlan;
	long long mid;
	long long result = 0;

	while (low <= high) {

		mid = (low + high) / 2;

		long long key = 0;

		for (int i = 0; i < K; i++)
		{
			key += arr[i] / mid;
		}

		if (key >= N) {
			low = mid + 1;
			result = max(result, mid);
		}
		else {
			high = mid - 1;
		}
	}

	cout << result;

	return 0;
}