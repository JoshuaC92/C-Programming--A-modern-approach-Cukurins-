#include <stdio.h>

int main(void){
	int day, day2, month, month2, year, year2;
	
	printf("Enter first date (dd/mm/yy: ");
	scanf("%d/%d/%d", &day, &month, &year);
	printf("Enter second date (dd/mm/yy): ");
	scanf("%d/%d/%d", &day2, &month2, &year2);

	if (year < year2){
		printf("%d/%d/%d is earlier than %d/%d/%d\n", 
			day, month, year, day2, month2, year2);
		}
	else if (year > year2){
		printf("%d/%d/%d is earlier than %d/%d/%d\n", 
			day2, month2, year2, day, month, year);
		}
	else if (month < month2){
		printf("%d/%d/%d is earlier than %d/%d/%d\n", 
			day, month, year, day2, month2, year2);
		}
	else if (month > month2){
		printf("%d/%d/%d is earlier than %d/%d/%d\n", 
			day2, month2, year2, day, month, year);
		}
	else if (day < day2){
		printf("%d/%d/%d is earlier than %d/%d/%d\n", 
			day, month, year, day2, month2, year2);
		}
	else if (day > day2){
		printf("%d/%d/%d is earlier than %d/%d/%d\n", 
			day2, month2, year2, day, month, year);
		}
	
	return 0;
}
