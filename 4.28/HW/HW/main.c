#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int a=0;
	
	while (1)
	{
		printf("\n職稱代號(輸入其他數字即程式停止)\nManager：1\nhourly woker：2\ncommission worker：3\npieceworker：4\n*********************************\n*數值計算後大於2^128可能造成溢位*\n*********************************\n\n\n輸入你的職稱代號：");
		scanf_s("%d", &a);
		if (a != 1 && a != 2 && a != 3 && a != 4) break;
		switch (a) 
		{
			case 1: {
				float c, d, b;
				b = c = d = 0;
				printf("輸入當週薪水：");
				scanf_s("%f", &b);
				printf("當週實領薪水：%.2f\n\n",b);
				break;
			}
			case 2: {
				float c, d, b;
				b = c = d = 0;
				printf("輸入當週工作時數(大於40小時每小時以1.5倍時薪計算)：");
				scanf_s("%f", &b);
				printf("輸入時薪：");
				scanf_s("%f", &c);
				if (b > 40) {
					d = (c * 40) + ((b - 40) * (c * 1.5));
					printf("當週實領薪水：%.2f\n\n", d);
					break;
				}
				else printf("當週實領薪水：%.2f\n\n", b * c);
				break;
			}
			case 3: {
				float c, d, b;
				b = c = d = 0;
				printf("輸入當週銷售額：");
				scanf_s("%f", &b);
				printf("當週實領薪水：%.2f\n\n", b * 0.057 + 250);
				break;
			}
			case 4: {
				float c, d, b;
				b = c = d = 0;
				printf("輸入當週接件數量：");
				scanf_s("%f", &b);
				printf("輸入每件價格：");
				scanf_s("%f", &c);
				printf("當週實領薪水：%.2f\n\n", b*c);
				break;
			}
		}
		
	}
	return 0;
}