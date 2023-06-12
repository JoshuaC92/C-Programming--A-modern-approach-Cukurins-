#include <stdio.h>

// This program sums integers and allows for long integers

int main(void){
	long n, sum = 0;

	printf("This program sums a series of integers.\n");
	printf("Enter integers (0 to termingat): ");

	scanf("%ld", &n);

	while(n != 0) {
		sum += n;
		scanf("%ld", &n);
		};

	printf("The sum is: %ld\n", sum);
	
	return 0;
}
