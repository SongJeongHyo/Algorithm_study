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

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a,b,T;
	cin >> T;

	vector<bool>V(10001, 1);
	V[0] = 0; //0
	V[1] = 0; //1
	//소수면 1
	
	for (int i = 2; i <= 10000; i++) {
		if (V[i]) {
			for (int j = i * 2; j <= 10000; j += i) {
				V[j] = 0;
			}
		}
	}

	for (int i = 0; i < T; i++) {
		int n;
		cin >> n;

		a = n / 2;
		b = n / 2;

		if (a == b && V[a] == true && V[b] == true) {

		}
		else {
			while (1) {
				a -= 1;
				b += 1;

				if (V[a] == true && V[b] == true) {
					break;
				}
			}
		}

		cout << a << " " << b << endl;
	}


	return 0;
}