#include <stdio.h>

int main(void){
	int one, two, three, four, min, max, min1, min2 ,max1, max2;
	printf("Enter four integers seperated by spaces: ");
	scanf("%d %d %d %d", &one, &two, &three, &four); 

	printf("%d %d %d %d\n", one, two, three, four);

	if (one < two){
		min1 = one;
		max1 = two;}
	else{ 
		min1 = two;
		max1 = one;}

	if (three < four){
		min2 = three;
		max2 = four;}
	else{ 
		min2 = four;
		max2 = three;}


	if (min1 < min2){
		min = min1;}
	else{
		min = min2;}

	if (max1 > max2){
		max = max1;}
	else{
		max = max2;}
	
	printf("Largest: %d\nSmallest: %d\n", max, min);

	return 0;
}	
