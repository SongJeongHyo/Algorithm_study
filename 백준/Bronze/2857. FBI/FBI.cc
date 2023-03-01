#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main() {
	vector<string>V(5);
	
	for (int i = 0; i < V.size(); i++) {
		string str;
		cin >> str;
		V[i] = str;
	}
	bool y = false;
	for (int i = 0; i < V.size(); i++) {
		for (int j = 0; j < V[i].size(); j++) {
			if (V[i][j] == 'F' && V[i][j + 1] == 'B' && V[i][j + 2] == 'I') {
				cout << i+1 << " ";
				y = true;
				break;
			}
		}
	}
	if (y == false) {
		cout << "HE GOT AWAY!";
	}
	return 0;
}