// Reverse an array of 10 numbers

#include <stdio.h>

#define N 10 	//define the constant for the array length

int main(void){
	int a[N], i;

	printf("Enter %d numbers: ", N);

	// Loop over scanf to fill up the array	
	for (i = 0; i < N; i++){
		scanf("%d", &a[i]); 
		};

	printf("In reverse order: ");

	// Loop over the array printing in reverse
	for (i = N - 1; i >= 0; i--){
		printf(" %d", a[i]);
		};

	printf("\n");

	return 0;
}
