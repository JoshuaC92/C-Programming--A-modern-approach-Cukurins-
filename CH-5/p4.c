#include <stdio.h>

int main(void){
	int wind;

	printf("Enter the windspeed in knots: ");
	scanf("%d",&wind);

	if (wind < 1){
		printf("Calm\n");}
	else if (wind <= 3){
		printf("Light air\n");}
	else if (wind <= 27){
		printf("Breeze\n");}
	else if (wind <= 47){
		printf("Gale\n");}
	else if (wind <= 63){
		printf("Storm\n");}
	else printf("Hurricane\n");

	return 0;
}
