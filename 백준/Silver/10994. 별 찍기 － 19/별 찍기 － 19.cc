#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <queue>
#include <stack>
#include<deque>

using namespace std;

//vector<vector<char>> V(397, vector<char>(397, 0)); //4 * n - 3 즉, n 최댓값은 100이므로 397
char V[397][397];

void draw(int len, int row, int col) {
	for (int i = 0; i < len; i++) {
		if (i == 0 || i == len - 1) { //사각형의 위 || 아래변
			for (int j = 0; j < len; j++) {
				V[row + i][col + j] = '*';
			}
		}
		else { //사각형의 왼 || 오른쪽 변
			V[row + i][col] = '*'; //left
			V[row + i][col + len - 1] = '*'; //right
		}
	}
}

void square(int N, int row, int col) {
	int len = 4 * N - 3;

	draw(len, row, col);

	if (N == 1) {
		return;
	}

	square(N - 1, row + 2, col + 2); //N이 1이 될 때까지 사각형으로 
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin >> N;

	//2차원벡터 ' '로 초기화
	for (int i = 0; i < 4 * N - 3; i++) {
		for (int j = 0; j < 4 * N - 3; j++) {
			V[i][j] = ' ';
		}
	}

	square(N, 0, 0);

	for (int i = 0; i < 4 * N - 3; i++) {
		for (int j = 0; j < 4 * N - 3; j++) {
			cout << V[i][j];
		}
		cout << '\n';
	}

	return 0;
}