#include <iostream>
#include <vector>
using namespace std;
//초기값=1 , 초기값+1을 반복해서 더함.
int main() {
	int n;
	int x = 1;
	int result = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		result += x ;
		x++;
	}
	cout << result ;
	return 0;
}