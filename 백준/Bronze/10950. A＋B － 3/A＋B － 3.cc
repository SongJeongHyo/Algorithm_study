#include <stdio.h>

int main() {
	int A,B,T;
	scanf("%d", &T);


	for (int i = 0; i < T; i++) {
		int result;

		scanf("%d %d", &A, &B);

		result = A + B;

		printf("%d\n", result);
	}
	

	return 0;
}