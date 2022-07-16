#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int>V(5);
	int result = 0;
	for (int i = 0; i < V.size(); i++) {
		int num;
		cin >> num;
		V[i] = num;
	}
	for (int i = 0; i < V.size(); i++) {
		result += V[i];
	}
	cout << result;
	return 0;
}