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
/*ios_base::sync_with_stdio(false);
cin.tie(NULL);*/

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		string str;
		cin >> str;
		for (int j = 0; j < num; j++) {
			cout << str;
		}
		cout << endl;
	}

	return 0;
}