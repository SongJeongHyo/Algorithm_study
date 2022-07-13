#include <stdio.h>
int main() {
	int N;
	scanf("%d", &N);

	int a = N;

	for (int i = 0; i < N; i++) {
		printf("%d\n", a);
		a--;
	}
	return 0;
}