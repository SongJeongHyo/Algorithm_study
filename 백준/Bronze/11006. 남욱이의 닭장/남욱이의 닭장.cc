#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int N, M;
		cin >> N >> M;

		int U = 2 * M - N;
		int t = M - U;

		cout << U << " " << t << endl;
	}

	return 0;
}