#include <stdio.h>

#define ARRAY 5

int main(void){
	int matrix[5][5] = {0};		
	int quizTotal[5] = {0};
	int studentTotal[5] = {0};
	int crntHigh = 0;
	int crntLow;

	for (int i = 0; i < ARRAY ; i++ ){
		printf("Enter Student %d scores: ", i + 1);
		for (int i2 = 0; i2 < ARRAY ; i2++ ){
			scanf("%d", &matrix[i][i2]);
			};
		};
	
	// GENERATE THE STUDENT TOTAL AND STUDENT AVERAGE
	printf("Student totals|average: ");
	for (int i = 0; i < ARRAY ; i++){
		for (int i2 = 0; i2 < ARRAY ; i2++){
			studentTotal[i] += matrix[i][i2];
			};
		printf(" %d|%d ", studentTotal[i], studentTotal[i]/5);
		};
	printf("\n");

	// ADD THE QUIZ: AVRG, HIGH AND LOW SCORE
	printf("Quiz average|low|high: ");
	for (int i = 0; i < ARRAY ; i++){
		crntLow = matrix[0][i];
		crntHigh = matrix[0][i];
		for (int i2 = 0; i2 < ARRAY ; i2++){
			quizTotal[i] += matrix[i2][i];
			if (matrix[i2][i] < crntLow){
				crntLow = matrix[i2][i];
				};
			if ( matrix[i2][i] > crntHigh){
				crntHigh = matrix[i2][i];
				}; 
			};
		printf(" %d|%d|%d ", quizTotal[i]/5, crntLow, crntHigh);
		};
	printf("\n");
	
	return 0;
}
