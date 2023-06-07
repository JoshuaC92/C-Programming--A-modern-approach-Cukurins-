#include <stdio.h>

int main(void){
	int day, month, year, day2, month2, year2;
	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &day, &month, &year);
	
	printf("Enter another date (dd/mm/yy): ");
	scanf("%d/%d/%d", &day2, &month2, &year2);

	do{
		if (year > year2){
			year = year2;
			month = month2;
			day = day2;
			}
		else if (year == year2 && month > month2){
			year = year2;
			month = month2;
			day = day2;
			}
		else if (year == year2 && month == month2 && day > day2){
			year = year2;
			month = month2;
			day = day2;
			}

		printf("Enter another date (dd/mm/yy): ");
		scanf("%d/%d/%d", &day2, &month2, &year2);

		} while(day2 != 0 && month2 != 0 && year2 != 0);

	printf("%d/%d/%d is the earliest date\n", day, month, year);
		
	return 0;
}
