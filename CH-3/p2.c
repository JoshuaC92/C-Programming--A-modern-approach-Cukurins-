#include <stdio.h>

int main(void){
	int item, day, month, year;
	float price;

	printf("Enter item number: ");
	scanf("%d", &item);

	printf("Enter unit price: ");
	scanf("%f", &price);

	printf("Enter purchase date(dd/mm/yyyy): ");
	scanf("%d/%d/%d", &day, &month, &year);

	printf("\n");
	printf("Item	Unit		Purchase\n");
	printf("	Price		Date\n");
	printf("%d	$%.2f		%.2d/%.2d/%d\n", item, price, day, month, year);

	return 0;
}
