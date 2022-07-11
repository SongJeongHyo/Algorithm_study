#include <iostream>
#include <vector>
using namespace std;

int main() {

	int N;
	int cycle = 0;
	cin >> N;
	int M = N;
	

	while (1) {
		int a;
		cycle++;

		a = (N / 10) + (N % 10);
		N = 10 * (N % 10) + (a % 10);


		if (N == M && cycle>0) {

			break;
		}

	}
	cout << cycle;

	return 0;
}