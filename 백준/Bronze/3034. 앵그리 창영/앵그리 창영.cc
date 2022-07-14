#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath> 
using namespace std;

int main() {
	int N;
	cin >> N;
	double W, H;
	cin >> W >> H;
	double T = W * W + H * H;
	double result = sqrt(T);

	for (int i = 0; i < N; i++) {
		double num;
		cin >> num;

		if (num <= result) {
			cout << "DA" << endl;
		}
		else {
			cout << "NE" << endl;
		}
	}

	return 0;
}