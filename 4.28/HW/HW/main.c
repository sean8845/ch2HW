#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int a=0;
	
	while (1)
	{
		printf("\n¾�٥N��(��J��L�Ʀr�Y�{������)\nManager�G1\nhourly woker�G2\ncommission worker�G3\npieceworker�G4\n*********************************\n*�ƭȭp���j��2^128�i��y������*\n*********************************\n\n\n��J�A��¾�٥N���G");
		scanf_s("%d", &a);
		if (a != 1 && a != 2 && a != 3 && a != 4) break;
		switch (a) 
		{
			case 1: {
				float c, d, b;
				b = c = d = 0;
				printf("��J��g�~���G");
				scanf_s("%f", &b);
				printf("��g����~���G%.2f\n\n",b);
				break;
			}
			case 2: {
				float c, d, b;
				b = c = d = 0;
				printf("��J��g�u�@�ɼ�(�j��40�p�ɨC�p�ɥH1.5�����~�p��)�G");
				scanf_s("%f", &b);
				printf("��J���~�G");
				scanf_s("%f", &c);
				if (b > 40) {
					d = (c * 40) + ((b - 40) * (c * 1.5));
					printf("��g����~���G%.2f\n\n", d);
					break;
				}
				else printf("��g����~���G%.2f\n\n", b * c);
				break;
			}
			case 3: {
				float c, d, b;
				b = c = d = 0;
				printf("��J��g�P���B�G");
				scanf_s("%f", &b);
				printf("��g����~���G%.2f\n\n", b * 0.057 + 250);
				break;
			}
			case 4: {
				float c, d, b;
				b = c = d = 0;
				printf("��J��g����ƶq�G");
				scanf_s("%f", &b);
				printf("��J�C�����G");
				scanf_s("%f", &c);
				printf("��g����~���G%.2f\n\n", b*c);
				break;
			}
		}
		
	}
	return 0;
}