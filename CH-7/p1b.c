#include <stdio.h>

int main(void){
	short n;
	printf("Enter number of entries in table: ");
	scanf("%hd", &n);

	for (int i = 1; i <= n; i++){
		printf("%10hd%10hd\n", i, i * i);
		};
	
	return 0;
} 
