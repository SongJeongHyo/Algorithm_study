#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
using namespace std;

int main() {
	int M, N;
	cin >> M >> N;
	int sum = 0;
	int min=0;

	vector<bool> V(10001); //false소수
	V[0] = true; //1
	V[1] = true; //2
	int a = 2;

	for (int i = 2; i <= 10000; i++) {
		if (!V[i])
			for (int j = 2; a * j <= 10000; j++) {
				V[a * j] = true;
			}
		a++;
	}
	for (int i = M; i <= N; i++) {
		if (V[i] == false) {
			sum += i;
		}
	}

	for (int i = M; i <= N; i++) {
		if (V[i] == false) {
			min = i;
			break;
		}
	}
	if (min != 0)
		cout << sum << endl << min;
	else
		cout << "-1";

	return 0;
}