#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int>V(6);
	for (int i = 0; i < V.size(); i++) {
		int num;
		cin >> num;
		V[i] = num;
	}
	int min_science = V[0];
	for (int i = 0; i < 4; i++) {
		if (min_science > V[i]) {
			min_science = V[i];
		}
	}
	int min_social = V[4];
	for (int i = 4; i < V.size(); i++) {
		if (min_social > V[i]) {
			min_social = V[i];
		}
	}
	int result = 0;
	for (int i = 0; i < V.size(); i++) {
		result += V[i];
	}
	result = result - (min_science + min_social);

	cout << result;
	return 0;
}