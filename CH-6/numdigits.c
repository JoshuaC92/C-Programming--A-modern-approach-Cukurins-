#include <stdio.h>

int main(void){
	int n, count = 0;
	printf("Enter a nonnegative integer: ");
	scanf("%d", &n);

	do {
		n /= 10;
		count++;
	} while (n != 0);

	printf("The number has %d digit(s).\n", count);

	return 0;
}		
