#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int>V(N);
	for (int i = 0; i < V.size(); i++) {
		int num;
		cin >> num;
		V[i] = num;
	}
	sort(V.begin(), V.end(), greater<int>());
	for (int i = 0; i < V.size(); i++) {
		/*cout << V[i] << endl;*/
		printf("%d\n", V[i]);

	}

	return 0;
}