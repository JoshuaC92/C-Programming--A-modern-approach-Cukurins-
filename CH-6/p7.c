#include <stdio.h>

int main(void){
	int n, i, odd, square;
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	i = 1;
	odd = 3;
	for (square = 1; i <= n; odd += 2){
		printf("%10d%10d\n", i, square);
		++i;
		printf("%d\n", odd);
		square += odd;
		};
	
	return 0;
} 
