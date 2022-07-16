#include <iostream>
#include <vector>
using namespace std;

int main() {
	int all;
	cin >> all;

	int sum = 0;
	vector<int>V(9);
	
	for (int i = 0; i < V.size(); i++) {
		int price;
		cin >> price;
		V[i] = price;
	}
	for (int i = 0; i < V.size(); i++) {
		sum += V[i];
	}
	cout << all - sum;

	return 0;
}