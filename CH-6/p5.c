#include <stdio.h>

int main(void){
	int num;

	printf("Enter integer: ");
	scanf("%d", &num);

	printf("The reverse of your number is: ");
	
	do {
		printf("%d", num % 10);
		num = num / 10;	
		} while(num != 0);

		
	printf("\n\n");

	return 0;
}
