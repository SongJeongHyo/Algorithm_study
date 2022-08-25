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
	
	vector<tuple<string, int, int>> V;
	long long a, b, c;

	V.push_back(make_tuple("black", 0, 1));
	V.push_back(make_tuple("brown", 1, 10));
	V.push_back(make_tuple("red", 2, 100));
	V.push_back(make_tuple("orange", 3, 1000));
	V.push_back(make_tuple("yellow", 4, 10000));
	V.push_back(make_tuple("green", 5, 100000));
	V.push_back(make_tuple("blue", 6, 1000000));
	V.push_back(make_tuple("violet", 7, 10000000));
	V.push_back(make_tuple("grey", 8, 100000000));
	V.push_back(make_tuple("white", 9, 1000000000));

	string str1, str2, str3;
	cin >> str1 >> str2 >> str3;

	for (int i = 0; i < V.size(); i++) {
		if (get<0>(V[i]) == str1) {
			a = get<1>(V[i]);
		}

		if (get<0>(V[i]) == str2) {
			b = get<1>(V[i]);
		}

		if (get<0>(V[i]) == str3) {
			c = get<2>(V[i]);
		}
	}

	//cout << a << " " << b << " " << c << endl;

	cout << ((10 * a) + b) * c;

	return 0;
}