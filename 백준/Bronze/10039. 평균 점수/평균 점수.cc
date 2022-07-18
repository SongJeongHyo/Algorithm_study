#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> V(5,0);
	int sum = 0;
	int aver = 0;

	for (int i = 0; i < V.size(); i++) {
		cin >> V[i];
		if (V[i] < 40) {
			V[i] = 40;
		}
		sum += V[i];
	}
	aver = sum / V.size();
	cout << aver;

	return 0;
}