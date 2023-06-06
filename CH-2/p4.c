#include <stdio.h>

int main(void){
	
	float amount;
	printf("Enter an amount: ");
	scanf("%f", &amount);

	float tax = amount * 1.05f;
	printf("With tax added: $%.2f\n", tax);

	return 0;
}
