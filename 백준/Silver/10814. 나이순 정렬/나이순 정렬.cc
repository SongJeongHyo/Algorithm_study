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

bool cmp(pair<int, string> a, pair<int, string> b)
{
	return a.first < b.first;
}


int main() {
	int N;
	cin >> N;

	pair<int, string> P;
	vector<pair <int, string>> V;

	for (int i = 0; i < N; i++) {
		int age;
		string name;
		cin >> age >> name;
		P.first = age;
		P.second = name;
		V.push_back(P);
	}

	stable_sort(V.begin(), V.end(), cmp);

	for (int i = 0; i < N; i++) {
		cout << V[i].first << " " << V[i].second << '\n';
	}

	return 0;
}