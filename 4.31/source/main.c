#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int i, j;
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5 - i; j++) {
			printf(" ");
		}
		for (int k = 1; k <=2*i-1; k++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 4; i >= 1; i--) {
		for (j = 1; j <= 5 - i; j++) {
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}