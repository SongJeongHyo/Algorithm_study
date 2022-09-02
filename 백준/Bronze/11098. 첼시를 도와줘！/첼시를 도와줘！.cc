#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int p;
		cin >> p;
		int C ;
		int max = 0;
		string name;
		string max_name;
		for (int j = 0; j < p; j++) {
			cin >> C >> name;
			if (C > max) {
				max = C;
				max_name = name;
			}
		}
		cout << max_name << endl;
	}

	return 0;
}