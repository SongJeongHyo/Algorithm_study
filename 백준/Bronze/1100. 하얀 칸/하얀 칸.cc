#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main() {
	vector<string>V(8);
	int num = 0;
	for (int i = 0; i < V.size(); i++) {
		string str;
		cin >> str;
		V[i] = str;
	}
	for (int i = 0; i < V.size(); i++) {
		for (int j = 0; j < 8; j++) {
			if (i % 2 == 0 && j % 2 == 0 && 
				V[i][j] == 'F') {
				num++;
			}
			if (i % 2 == 1 && j % 2 == 1 &&
				V[i][j] == 'F') {
				num++;
			}
		}
	}
	cout << num;
	return 0;
}