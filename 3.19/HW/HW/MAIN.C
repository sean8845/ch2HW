#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a, b, c;
	while (1)
	{
		printf("\nEnter loan principal¡G");
		scanf_s("%f", &a);
		if (a == -1) break;
		else
		{
			printf("Enter interest rate¡G");
			scanf_s("%f", &b);
			printf("Enter term of the loan in day¡G");
			scanf_s("%f", &c);
			printf("The interet charge is $%.2f\n", a * b * c / 365);
		}
		

	}
	

}