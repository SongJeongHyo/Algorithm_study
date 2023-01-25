#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> V(10,0);
	int a ;
	int result = 0;
	bool differ = true;
	
	for (int i = 0; i < V.size(); i++){
		cin >> a;
		V[i] = a % 42;
	}

	for (int i = 0; i < V.size(); i++) {
		differ = true;
		for (int j = i+1; j < V.size() ; j++){
			if (V[i] == V[j]) {
				differ = false;
			}
		}
		if (differ) {
			result++;
		}
	}
	cout << result;
	return 0;
}