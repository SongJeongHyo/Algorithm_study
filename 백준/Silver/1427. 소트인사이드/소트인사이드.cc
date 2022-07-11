#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string str;
	cin >> str;
	vector<int>V;

	for (int i = 0; i < str.size(); i++) {
		V.push_back(str[i]-'0');
	}

	sort(V.begin(), V.end(), greater<int>());

	for (int i = 0; i < V.size(); i++) {
		cout << V[i];
	}

	return 0;
}