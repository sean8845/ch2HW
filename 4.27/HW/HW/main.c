#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	int a, b, c;
	printf("\t斜邊\t兩邊\t兩邊\n==================================\n");
	for (c = 1; c < 500; c++){
		for (a = 1; a < c; a++){
			for (b = a + 1; b < c; b++){
				if (pow(a,2) + pow(b,2) ==pow(c,2))printf("\t%d\t%d\t%d\n ", c, b, a);
			}
		}
	}
	return 0;
}