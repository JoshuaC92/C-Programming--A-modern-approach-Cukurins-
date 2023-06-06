#include <stdio.h>

int main(void){
	int num;

	printf("Enter a three digit number: ");
	scanf("%3d", &num);

//      Example: 478
//               478 % 10         = 8
//               (478 % 100) / 10 = 2
//               478 / 100        = 4

	printf("The reversal is: %d %d %d\n", num % 10, (num % 100) / 10, num / 100);

	return 0;
}
