#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	
	int o, sam;
	vector<int> vec(5001);
	vector<int> O(5001);
	vector<int> SAM(5001);


	for (o = 0; o <= 1000; o++) {
		for (sam = 0; o * 5 + sam * 3 <= 5000; sam++) {
			vec[o * 5 + sam * 3] = 1;
			O[o * 5 + sam * 3] = o;
			SAM[o * 5 + sam * 3] = sam;
		}
	}
	int n;
	cin >> n;
	if (vec[n] == 0)
	{
		cout << -1 << endl;
		return 0;
	}
	cout << O[n] + SAM[n] << endl;

	return 0;
}