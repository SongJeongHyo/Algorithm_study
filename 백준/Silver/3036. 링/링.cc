#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
int gcd(int a, int b)
{
	int c;
	while (b)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main() {
	int T;
	cin >> T ;
	int A;
	cin >> A;
	for (int i = 0; i < T-1; i++) {
		int num;
		cin >> num;
		cout << A/gcd(A, num) << "/" << num / gcd(A, num) << endl;
	}
	return 0;

}