#include <stdio.h>

int main(void){
	int n;
	printf("Enter number of entries in table: ");
	scanf("%d", &n);
	getchar(); //consume newline so it doesnt run loop automatically

	for (int i = 1, c = 1; i <= n; i++){
		printf("%10d%10d\n", i, i * i);
		if (c % 24 == 0){
			printf("Press Enter to continue ...\n");	
			while (getchar() != '\n'){
				continue;
			};
		};
		c++;
	};	
	return 0;
} 
