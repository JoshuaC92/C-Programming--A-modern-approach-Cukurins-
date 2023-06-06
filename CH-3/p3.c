#include <stdio.h>

int main(void){
	int GSI, group, pub, item, check;
	
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &GSI, &group, &pub, &item, &check);
	
	printf("GSI prefix: %d\n", GSI);
	printf("Group prefix: %d\n", group);
	printf("Publisher code: %d\n", pub);
	printf("Item number: %d\n", item);
	printf("Check digit: %d\n", check);

	return 0;
}
