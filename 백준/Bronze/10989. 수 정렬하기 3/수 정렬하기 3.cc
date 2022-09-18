#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int V[10001] = { 0 };
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		V[x] += 1;
	}//배열에 해당하는 숫자 1씩 증가시킴

	for (int i = 1; i <= 10000; i++) {
		for (int j = 0; j < V[i]; j++) {
			cout << i  <<'\n';
		}
	}//i 값을 배열의 값만큼 반복해서 출력

	return 0;
}