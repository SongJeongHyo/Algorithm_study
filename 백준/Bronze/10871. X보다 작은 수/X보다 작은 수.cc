#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, X;
	cin >> N >> X;
	vector<int> vec(N);

	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		vec[i] = a;
	}
	for (int i = 0; i < N; i++) {
		if (vec[i] < X) {
			cout << vec[i];
			cout << " ";
		}
	}
	
	return 0;
}