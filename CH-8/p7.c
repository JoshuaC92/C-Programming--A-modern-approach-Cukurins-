#include <stdio.h>

#define ARRAY 5

int main(void){
	int matrix[5][5] = {0};		// Hold the array
	int rowTotal[5] = {0};
	int colTotal[5] = {0};

	for (int i = 0; i < ARRAY ; i++){
		printf("Enter row %d: ", i + 1);
		scanf("%d %d %d %d %d", &matrix[i][0],
					&matrix[i][1],
					&matrix[i][2],
					&matrix[i][3],
					&matrix[i][4]);
		};
	
	printf("Row totals: ");
	for (int i = 0; i < ARRAY ; i++){
		for (int i2 = 0; i2 < ARRAY ; i2++){
			rowTotal[i] += matrix[i][i2];
			};
		printf(" %d", rowTotal[i]);
		};
	
	printf("\n");	
	
	printf("Column totals: ");
	for (int i = 0; i < ARRAY ; i++){
		for (int i2 = 0; i2 < ARRAY ; i2++){
			colTotal[i] += matrix[i2][i];
			};
		printf(" %d", colTotal[i]);
		};
	
	printf("\n");
	
	return 0;
}
