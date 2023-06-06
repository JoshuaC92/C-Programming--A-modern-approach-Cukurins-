#include <stdio.h>

int main(void){
	int i;
	printf("Enter a number: ");
	scanf("%d", &i);

	i = (i >= 0 ? i : -i);

	printf("The number %d has ", i);
	if (i <=9){
		printf("1");
		}
	else if (i <= 99){
		printf("2");
		}
	else if (i <= 999){
		printf("3");
	}
	else printf("4");
	
	printf(" digits\n");

	return 0;
}
