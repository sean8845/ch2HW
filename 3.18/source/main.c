#include<stdio.h>
#include <stdlib.h>

int main(void)
{
	float a;
	while (1)
	{
		printf("\nEnter sales in dollars(-1 to end)¡G");
		scanf_s("%f",&a);
		if (a == -1) break;
		else
		{
			a = a * 0.09 + 200;
			printf("Salary is¡G%.2f\n",a);
		}
	}
	return 0;
}