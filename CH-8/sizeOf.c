// Demostrate the use of the size of opperator on array's
#include <stdio.h>

int main(void){
	int a;			// Here is a integer	
	int s[10];		// Here is an array of integers

	printf("The size of an integer is: %ld\n", sizeof(a));
	printf("Therefore the size of an array of int that is ten long should be: %ld\n",
		 10 * sizeof(a));

	printf("The size of an array of integers that is ten long is: %ld\n", sizeof(s));

	return 0;
} 
