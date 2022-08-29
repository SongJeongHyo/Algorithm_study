#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main() {
	int T; //횟수
	int S; //글자수
	cin >> T >> S;
	
	vector<string> V(T);
	for (int i = 0; i < V.size(); i++) {
		string N;
		cin >> N;

		V[i] = N;
	}
	vector<string> V1(T);
	for (int i = 0; i < V1.size(); i++){
		string M;
		cin >> M;

		V1[i] = M;
	}
	bool y = true;
	for (int j = 0; j < T; j++) {
		for (int i = 0; i < S; i++) {
			if (V[j][i] != V1[j][2 * i] || V[j][i] != V1[j][(2 * i) +1]) {
				y = false;
			}
		}
	}
	if (y) {
		cout << "Eyfa";
	}
	else {
		cout << "Not Eyfa";
	}
	return 0;
}