#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <queue>

using namespace std;

int main() {
	int N, K;
	cin >> N >> K;

	queue<int>circle;

	for (int i = 1; i <= N; i++) {
		circle.push(i);
	}
	cout << "<";

	while (circle.size()-1)	{
		for (int i = 0; i < K - 1; i++) {
			circle.push(circle.front());
			circle.pop();
		}
		cout << circle.front() << ", ";
		circle.pop();
	}

	cout << circle.front() << ">";
	
	return 0;
}