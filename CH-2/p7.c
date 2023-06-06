#include <stdio.h>
int main(void){
	int val;
	printf("Enter a value in dollars: ");
	scanf("%d",&val);

	int n20 = val / 20;                     
	int n10 = (val - n20 * 20) / 10;            
	int n5  = (val - ((n10 * 10) + (n20 * 20))) / 5;
	int n1  = (val - ((n5 * 5) + (n10 * 10) + (n20 * 20))) / 1;

	printf("$20 bills: %d\n", n20); 
	printf("$10 bills: %d\n", n10); 
	printf(" $5 bills: %d\n", n5); 
	printf(" $1 bills: %d\n", n1);

	return 0;
}
