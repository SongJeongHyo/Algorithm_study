#include <stdio.h>

int main() {
	int H,M;
	scanf("%d %d", &H, &M);
	
	if (H != 0) {
		if (M < 45) {
			H -= 1;
			M = 60 + M - 45;
		}
		else {
			M -= 45;
		}
	}
	else {
		if (M < 45) {
			H = 23;
			M = 60 + M - 45;
		}
		else {
			M -= 45;
		}
	}

	printf("%d %d", H, M);

	return 0;
}