// Reverse an array of 10 numbers

#include <stdio.h>

#define ARRAY_LENGTH (sizeof(a) / sizeof(a[0]))	//define the constant for the array length

int main(void){
	int a[10], i;

	printf("Enter %d numbers: ", (int) ARRAY_LENGTH);

	// Loop over scanf to fill up the array	
	for (i = 0; i < ARRAY_LENGTH; i++){
		scanf("%d", &a[i]); 
		};

	printf("In reverse order: ");

	// Loop over the array printing in reverse
	for (i = (int) ARRAY_LENGTH - 1; i >= 0; i--){
		printf(" %d", a[i]);
		};

	printf("\n");

	return 0;
}
