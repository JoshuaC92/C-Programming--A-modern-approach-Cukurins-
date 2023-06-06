#include <stdio.h>

int main(void){
	int x;

	printf("Enter a value for x: ");
	scanf("%d", &x);

	int x5 = (x * x * x * x * x);
	int x4 = (x * x * x * x);
	int x3 = (x * x * x);
	int x2 = (x * x);

	int new_x = (3 * x5 + 2 * x4 - 5 * x3 - x2 + 7 * x - 6);
	
	printf("Here you go: %d\n", new_x);

	return 0;
}
