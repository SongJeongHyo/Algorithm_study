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
		
		cout <<  a << '\n';
		a++;
	}
	return 0;
}