#include <stdio.h>

int main(void){
	float loan, rate, monthly, payment, b1, b2, b3;

	printf("  Enter amount of loan: ");
	scanf("%f", &loan);

	printf("   Enter interest rate: ");
	scanf("%f", &rate);

	printf("Enter monthly  payment: ");
	scanf("%f", &payment);

	monthly = (rate / 100) / 12;

	b1 = (loan - payment) + ((loan - payment) * monthly);
	b2 = (b1 - payment) + ((b1 - payment) * monthly);
	b3 = (b2 - payment) + ((b2 - payment) * monthly);

	printf("\n");
	printf(" Balance remaining after first payment: $ %.2f\n", b1); 
	printf("Balance remaining after second payment: $ %.2f\n", b2); 
	printf(" Balance remaining after third payment: $ %.2f\n", b3);

	return 0;
}
