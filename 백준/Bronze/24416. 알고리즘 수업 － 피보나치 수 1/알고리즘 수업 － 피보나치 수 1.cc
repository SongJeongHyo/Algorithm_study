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
vector<int>f(41);

int fib(int n) {
	if (n == 1)
		return 1;
	else if (n == 2)
		return 1;
	else return (fib(n - 1) + fib(n - 2));
}

int fibonacci(int n) {
	f[1] = f[2] = 1;

	for (int i = 3; i < n; i++)
		f[i] = f[i - 1] + f[i - 2];

	return f[n];
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;

	cout << fib(n) << " " << n - 2;

	return 0;
}