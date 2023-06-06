#include <stdio.h>

int main(void){
	int num, denom, x, y, remainder;

	printf("Enter a fraction: ");
	scanf("%d/%d", &num, &denom);

	x = num;
	y = denom;
	
	while (y != 0){
		remainder = x % y;
		x = y;
		y = remainder;
	};

	num = num / x;
	denom = denom / x;

	printf("In lowest terms: %d/%d\n", num, denom);

	return 0;
}
