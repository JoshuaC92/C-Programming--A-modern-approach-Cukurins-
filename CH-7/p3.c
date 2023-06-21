#include <stdio.h>

// This program sums integers and allows for long integers

int main(void){
	double n, sum = 0;

	printf("This program sums a series of integers.\n");
	printf("Enter integers (0 to termingat): ");

	scanf("%lf", &n);

	while(n != 0) {
		sum += n;
		scanf("%lf", &n);
		};

	printf("The sum is: %lf\n", sum);
	
	return 0;
}
