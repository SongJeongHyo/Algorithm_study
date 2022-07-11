#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= 97) {
			str[i] -= 32;
		}
	}
	vector<vector<int> > V(26, vector<int>(2, 0));
	int A = 65;
	for (int i = 0; i < V.size(); i++) {
		V[i][0] = A;
		A++;
	}
	for (int i = 0; i < str.size(); i++) {
		for (int k = 0; k < V.size(); k++) {
			if (str[i] == V[k][0]) {
				V[k][1]++;
			}
		}
	}
	/*for (int i = 0; i < V.size(); i++) {
		for (int j = 0; j < 2; j++) {
			cout << V[i][j] << " ";
		}
		cout << endl;
	}*/
	int max = V[0][1];
	int index = 0;
	for (int i = 1; i < V.size(); i++) {
		if (max < V[i][1]) {
			max = V[i][1];
			index = i;
		}
	}
	for (int i = 0; i < V.size(); i++) {
		if (i != index && max == V[i][1]) {
			cout << "?";
			return 0;
		}
	}
	cout << (char)V[index][0];

	return 0;
}