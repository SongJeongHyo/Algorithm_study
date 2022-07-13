#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> V(10,0);
	int a, b, c ;
	int result;
	int r;
	cin >> a >> b >> c;

	result = a * b * c;

	//cout << result << endl;
	while (result > 0) {
		r = result % 10;

		//cout << r << "--" << result << endl;

		result = result / 10;

		V[r]++;

	}

	for (auto& i : V)
		cout << i << endl;
	return 0;
}