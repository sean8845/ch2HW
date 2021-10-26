#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int i, j,k;
	printf("(A)");
	for (i = 0; i <= 10; i++) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
//===============================================
	printf("(B)\n");
	for (i = 10; i>= 1; i--) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
//===============================================
	printf("(C)\n");
	for (i =1; i <=10; i++) {
		for (j = 1; j <= 10-i; j++) {
			printf(" ");			
			}
		for (k = 1; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
//===============================================
	printf("(D)\n");
	for (i = 1; i <= 10; i++) {
		for (j = 1; j < i; j++) {
			printf(" ");
		}
		for (k = 0; k <= 10-i; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}