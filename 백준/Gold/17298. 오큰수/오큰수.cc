#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <stack>
#define MAX 1000001
using namespace std;

int n;
int arr[MAX];
int result[MAX];
stack<int> st;

void Input() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}

void Solution() {
	for (int i = n - 1; i >= 0; i--) {
		while (!st.empty() && st.top() <= arr[i]) {
			st.pop();
		}
		if (st.empty()) {
			result[i] = -1;
		}
		else {
			result[i] = st.top();
		}
		st.push(arr[i]);
	}
	for (int i = 0; i < n; i++) {
		cout << result[i] << " ";
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	Input();
	Solution();

	return 0;
}