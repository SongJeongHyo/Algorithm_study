#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	int a = 1;
	int b = 1;
	cin >> N;

	for (int i = 0; i < N; i++) {
		
		for (int j = 0; j < N-a; j++) {
			cout << " ";
		}
		for (int u = 0; u < b; u++) {
			cout << "*";
		}
		a++;
		b++;
		cout << '\n';
	}
	return 0;
}