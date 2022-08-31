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
	
	int N;
	cin >> N;
	
	int side_blank = 1;
	int center_blank = 2 * N - 3 - 2;
	

	for (int i = 0; i < 2 * N - 1; i++) {

		if (i == 0 || i == 2 * N - 2) { //upeer || lower
			for (int j = 0; j < N; j++) {
				cout << "*";
			}
			for (int j = 0; j < 2 * N - 3; j++) {
				cout << " ";
			}
			for (int j = 0; j < N; j++) {
				cout << "*";
			}
			cout << endl;
		}

		if (i != N-1 && i < N - 1 && i >= 1) { //not center && upper
			for (int j = 0; j < side_blank; j++) {
				cout << " ";
			}
			cout << "*";

			for (int j = 0; j < N - 2; j++) {
				cout << " ";
			}
			cout << "*";

			for (int j = 0; j < center_blank; j++) {
				cout << " ";
			}
			cout << "*";

			for (int j = 0; j < N - 2; j++) {
				cout << " ";
			}
			cout << "*";

			side_blank++;
			center_blank -= 2;

			cout << endl;
		}
		else if (i == N - 1) { // center
			for (int j = 0; j < side_blank; j++) {
				cout << " ";
			}
			cout << "*";

			for (int j = 0; j < N - 2; j++) {
				cout << " ";
			}
			cout << "*";

			for (int j = 0; j < N - 2; j++) {
				cout << " ";
			}
			cout << "*" << endl;

			side_blank--;
			center_blank = 1;
		}
		else if (i != N - 1 && i > N - 1 && i < 2 * N - 2) { //not center && lower
			for (int j = 0; j < side_blank; j++) {
				cout << " ";
			}
			cout << "*";

			for (int j = 0; j < N - 2; j++) {
				cout << " ";
			}
			cout << "*";

			for (int j = 0; j < center_blank; j++) {
				cout << " ";
			}
			cout << "*";

			for (int j = 0; j < N - 2; j++) {
				cout << " ";
			}
			cout << "*";

			side_blank--;
			center_blank += 2;

			cout << endl;
		}
	}



	return 0;
}