// Check for repeated digits in a number

#include <stdio.h>
#include <stdbool.h>

int main(void){
	bool digit_seen[10] = {false}; 		// Keep track of all decimal digits (0 - 9)
	int digit_count[10] = {0};		// Count the digits occurances.
	long n;					// Store number entered by user (line 12)
	long n2;				// Store a second copy of user input
	int digit;				// Store digit taken from n

	printf("Enter a number: ");
	scanf("%ld", &n);

	n2 = n;					// Duplicate user input.

	while (n > 0){
		digit = n % 10;			// get the least significant (right most) digit 
		if (digit_seen[digit]){		// check if the digit has been seen already
			break;			// Exit loop as duplicate encountered
			};
		digit_seen[digit] = true;	// mark the digit as seen. 
		n /= 10;			// remove the lease significant digit
		}
	
	while (n2 > 0){
		digit = n2 % 10;		// get the least significant(right most) digit 	
		digit_count[digit] += 1;	// increment digit count
		n2 /= 10;			// remove the lease significant digit
		}
	
	if (n > 0){				// Check if while (line 14) broke early
		printf("Repeated digits: ");
		for (int i = 0; i <= 9; i++){
			if (digit_count[i] > 1){	// If digit has appeard more than once	
				printf(" %d", i);	// print it.
			};	
		};
		printf("\n");	
	}
	else printf("No repeated digit.\n");

	return 0;
}
