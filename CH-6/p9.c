#include <stdio.h>

int main(void){
	float loan, rate, monthly, payment;
	int numOfPayments;

	printf("  Enter amount of loan: ");
	scanf("%f", &loan);

	printf("   Enter interest rate: ");
	scanf("%f", &rate);

	printf("Enter monthly  payment: ");
	scanf("%f", &payment);

	printf("Enter number of payments: ");
	scanf("%d", &numOfPayments);

	monthly = (rate / 100) / 12;

	printf("\n");
	
	for(int i = 1 ; i <= numOfPayments ; i++){
		loan = (loan - payment) + ((loan - payment) * monthly);
		printf("Balance remaining after %d payment(s): $ %.2f\n", i, loan);
		};

	return 0;
}
