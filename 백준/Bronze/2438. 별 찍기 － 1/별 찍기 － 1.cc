#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	int a = 1;
	cin >> N;

	for (int i = 0; i < N; i++) {
		
		for (int j = 0; j < a; j++) {
			cout << "*";
		}
		a++;
		cout << '\n';
	}
	return 0;
}