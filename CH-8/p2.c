// Check for repeated digits in a number

#include <stdio.h>
#include <stdbool.h>

int main(void){
	int digit_count[10] = {0};		// Count the digits occurances.
	long n;					// Store number entered by user (line 12)
	int digit;				// Store digit taken from n

	printf("Enter a number: ");
	scanf("%ld", &n);

	printf("Digit	      :  0  1  2  3  4  5  6  7  8  9 \n");
	printf("Occurance     : ");

	while (n > 0){
		digit = n % 10;			// get the least significant(right most) digit 	
		digit_count[digit] += 1;	// increment digit count
		n /= 10;			// remove the lease significant digit
		}
	
	for(int i = 0; i < 10; i++){
		printf("%2d ", digit_count[i]);
		};

	printf("\n");

	return 0;
}
