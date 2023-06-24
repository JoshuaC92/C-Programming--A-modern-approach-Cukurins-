#include <stdio.h>

int main(void){
	int hrs, hrs2, mins;
	char tod;

	printf("Enter a 12-hour time: ");
	scanf("%d:%d %c", &hrs, &mins, &tod);

	if (tod == 'P' && hrs != 12){
		hrs2 = 12 + hrs;
		}
	else if (tod == 'A' && hrs == 12){
		hrs2 = 0;
		}
	else hrs2 = hrs;

	printf("Equivalent 24-hour time: %.2d:%.2d\n", hrs2, mins);

	return 0;
}	
