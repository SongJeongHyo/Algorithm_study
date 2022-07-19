#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;

	string S;
	int sum = 0;

	cin >> S;
	
	for (int i = 0; i < S.size(); i++) {
		if (S[i] != 'C') {
			sum++;
		}
	}
	cout << N / (sum+1);

	return 0;
}