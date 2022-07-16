#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <queue>
#include <stack>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a = 2;

	vector<bool>V(246913); //false -> 소수
	V[0] = V[1] = true; //0,1

	for (int i = 2; i <= V.size() - 1; i++) {
		if (!V[i]) {
			for (int j = 2; a * j <= V.size() - 1; j++) {
				V[a * j] = true;
			}
		}
		a++;
	}

	while (1)
	{
		int n;
		int cnt = 0;
		cin >> n;

		if (n == 0) return 0;

		for (int i = n+1; i <= 2 * n; i++) {
			if (!V[i]) {
				//cout << "i : " << i << endl;
				cnt++;
			}
		}
		cout << cnt << endl;
	}

	return 0;
}