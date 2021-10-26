#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a, b,c;
	while (1)
	{
		printf("\nEnter # of hours worked(-1 to end)¡G");
		scanf_s("%f", &a);
		
		if (a == -1) break;
		else if (a!=-1&&a <= 40) {
			printf("Enter hourly rate of the worker($00.00)¡G");
			scanf_s("%f", &b);
			c = a * b;
			printf("Salary is $%.2f\n",c);
		}
		else if (a!=-1&&a > 40) {
			printf("Enter hourly rate of the worker($00.00)¡G");
			scanf_s("%f", &b);
			c = 40 * b + (a - 40) * (b * 1.5);
			printf("Salary is $%.2f\n", c);
		}
	}


	return 0;
}