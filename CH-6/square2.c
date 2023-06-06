#include <stdio.h>

int main(void){
	int n;
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++){
		printf("%10d%10d\n", i, i * i);
		};
	
	return 0;
} 
