// This program generates a table showing the value of $100 invested 
// over a number of years, at a certain rate both input by user.
#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0]))) 	// Get the length of the rates array
#define INITIAL_BALANCE 100.00 					// Starting balance	

int main(void){
	int i;							// Counter
	int low_rate;						// Store the input rate
	int num_years;						// Store the input years
	int month;						// Counter for the month
	int year;						// Counter for year
	double value[5];					// Store the values for a year

	printf("Enter interest rate: ");
	scanf("%d", &low_rate);
	printf("Enter number of years: ");
	scanf("%d", &num_years);

	printf("\nYears");
	
	for (i = 0; i < NUM_RATES; i++){			// This loop creates the first
		printf("%6d%%", low_rate + i);			// row of the table listing the
		value[i] = INITIAL_BALANCE;			// percentage points, it also 
		};						// initialises the values.

	printf("\n");

	for (year = 1; year <= num_years; year++){
		printf("%3d    ", year);			// Print the year column
		for (i = 0; i < NUM_RATES; i++){
			for (month = 1; month <= 12; month++){
				value[i] *= (double) ((low_rate + i) / 12.0 / 100.0 + 1.0);
				};
			printf("%7.2f", value[i]);		
			}
		printf("\n");
	};
	
	return 0;
}
