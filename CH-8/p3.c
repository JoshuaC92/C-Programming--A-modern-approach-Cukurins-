// Check for repeated digits in a number

#include <stdio.h>
#include <stdbool.h>

int main(void){
	bool digit_seen[10] = {false}; 		// Keep track of all decimal digits (0 - 9)
	long n;					// Store number entered by user (line 12)
	int digit;				// Store digit taken from n
	int num_count;				// count the number of input numbers from user

	printf("Enter a number: ");
	scanf("%ld", &n);

	while (n > 0){
		while (n > 0){			//Old while loop will perform the normal operation
			digit = n % 10;		//get the least significant (right most) digit 
			if (digit_seen[digit]){	//check if the digit has been seen already
				break;		//Exit loop as duplicate encountered
				};
			digit_seen[digit] = true;	//mark the digit as seen. 
			n /= 10;		// remove the lease significant digit
			}
		if (n > 0){			//Check if while (line 14) broke early
			printf("Repeated digit.\n");
			}
		else printf("No repeated digit.\n");
		for(int i = 0; i < 10; i++){
			digit_seen[i] = false;  	
			};
		printf("Enter a number: ");	
		scanf("%ld", &n);
		};

	return 0;
}
