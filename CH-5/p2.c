#include <stdio.h>

int main(void){
	int hh, mm;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hh, &mm);

	printf("Equivalent 12-hour time: ");
	
	if (hh <= 12)
		printf("%d:%d AM\n", hh, mm);
	else printf("%d:%d PM\n", hh - 12, mm);

	return 0;
}	
