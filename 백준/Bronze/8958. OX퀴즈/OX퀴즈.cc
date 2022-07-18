#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main() {
	int N = 0;
	cin >> N;
	
	for (int i = 0; i < N; i++){
		int result = 0;

		string str;
		cin >> str;
		
		int plus = 1;

		for (int j = 0; j < str.size(); j++) {
			if (str[str.size()] == 'O') {
				result += plus;
			}
			else {

				if (str[j] == 'O' && str[j + 1] == 'O') {
					result += plus;
					plus++;
				}
				else if (str[j] == 'O' && str[j + 1] != 'O') {
					result += plus;
					plus = 1;
				}
				else {
					plus = 1;
				}
			}
		}
	cout << result << endl;
	}

	return 0;
}