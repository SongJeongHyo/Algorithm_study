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
	
	int n;
	int result = 0;
	cin >> n;

	string str1,str2;

	cin >> str1 >> str2;

	for (int i = 0; i < n; i++) {
		if (str1[i] != str2[i])
			result++;
	}
	cout << result;

	return 0;
}