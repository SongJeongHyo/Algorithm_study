#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main() {
	int C;
	cin >> C;

	for (int i = 0; i < C; i++) { //테스트 케이스 수
		double N;
		cin >> N;
		vector<int> V(N);

		double average = 0;
		int total = 0;

		for (int j = 0; j < V.size(); j++){ //각 케이스의 학생 점수
			int grade = 0;
			cin >> grade;
			V[j] = grade;

			//cout << "grade" << V[j] << endl;
		}
		
		for (int j = 0; j < V.size(); j++) { //평균
			total = total + V[j];
		}

		average = total / N;

		//cout << "average" << average << endl;

		double stu = 0;
		double percent = 0;

		for (int j = 0; j < V.size(); j++) {
			if (V[j] > average) {
				stu += 1;
			}
		}
		//cout << "stu : " << stu << endl;

		percent = stu * 100 / N;

		cout << fixed;
		cout.precision(3);
		cout << percent << "%" << endl;
	}

	return 0;
}
