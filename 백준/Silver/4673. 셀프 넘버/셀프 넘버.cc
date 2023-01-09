#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int fuck(int a) {
	int num = 0;
	int result = a;

	while (a>0) {
		num = a % 10;
		result += num;
		a = a / 10;
	}
	return result;
}
int main() {
	vector<bool> V(11000, true);

	for (int i = 0; i < 10000; i++){
		int idx;
		
		idx = fuck(i);
		V[idx] = false;

		if (V[i]) {
			cout << i << endl;
		}
	}
}

