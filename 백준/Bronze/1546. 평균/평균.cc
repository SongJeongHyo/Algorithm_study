#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;

	float M;
	vector<float> V(N);
	
	float p=0;
	float result = (1.0e-2);

	for (int i = 0; i < V.size(); i++){
		int x;
		cin >> x;
		V[i] = x;
	}

	M = V[0];

	for (int i = 0; i < V.size(); i++){
		if (V[i] > M) {
			M = V[i];
		}
	}
	//cout << "최댓값 : " << M << endl;

	for (int i = 0; i < V.size(); i++){
		V[i] = V[i] / M * 100;
		//cout << V[i] << endl;
	}

	for (int i = 0; i < V.size(); i++){
		p += V[i];
	}

	result = p / N;
	//cout << result;
	printf("%.2f", result);

	return 0;
}