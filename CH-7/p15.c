#include <stdio.h>

int main(void){
	int num, cnt = 1;
	short fact = 1;

	printf("Enter a positive integer: ");
	scanf("%d", &num);

	while (cnt <= num){
		fact = fact * cnt;
		cnt++;
		};

	printf("Factorial of %d: %d\n", num, fact);

	return 0;
}
