#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){

	double a=0.005;
	double b = 5000.0;
	printf("Year\tAmount on deposit\n");

	for (int i = 1; i <= 15; ++i) {
		double k = b * pow(1.1 + a, i);
		printf("%d\t%.2f\n", i, k);
		
	}
	return 0;
}