#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int N, A, B;

	cin >> N >> A >> B;

	int sum = 0;
	sum += A / 2;
	sum += B;
	
	if (sum > N) {
		cout << N;
	}
	else {
		cout << sum;
	}

	return 0;
}