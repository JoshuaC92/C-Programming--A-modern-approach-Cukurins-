/* Computes a Universal Product Code check digit */

#include <stdio.h>

int main(void){
	int digit1; 
	int sum1, a1, a2, a3, a4, a5; 
	int sum2, b1, b2, b3, b4, b5;
	int total;
	
	printf("Enter the first (single) digit: ");
	scanf("%1d", &digit1);
	printf("Enter the first group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &a1, &a2, &a3, &a4, &a5);
	printf("Enter the second group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &b1, &b2, &b3, &b4, &b5);
	
	sum1 = digit1 + a2 + a4 + b1 + b3 + b5;
	sum2 = a1 + a3 + a5 + b2 + b4;

	total = 3 * sum1 + sum2;

	printf("Check digit: %d\n", 9 - ((total - 1) % 10));

	return 0;
}	
