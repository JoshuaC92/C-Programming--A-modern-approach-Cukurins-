#include <stdio.h>

int main(void){
	int n, i = 1;
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	while (i <= n){
		printf("%10d%10d\n", i, i * i);
		i +=1;};
	
	return 0;
} 
