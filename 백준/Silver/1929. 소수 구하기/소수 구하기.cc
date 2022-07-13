#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
using namespace std;

int main() {
	int M, N;
	cin >> M >> N;

	vector<bool> V(1000001); //false소수
	V[0] = true; //1
	V[1] = true; //2
	int a = 2;

	for (int i = 2; i<=1000000; i++) {
		if(!V[i])
			for (int j = 2; a*j <= 1000000; j++) {
				V[a * j] = true;
			}
		a++;
	}

	for (int i = M; i <= N; i++) {
		if (V[i] == false) {
            printf("%d\n", i);
		}
	}

	return 0;
}