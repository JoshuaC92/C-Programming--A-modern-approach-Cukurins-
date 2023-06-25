#include <stdio.h>

int main(void){
	double crnt = 0.0; // Hold the current variable.
	double ttl  = 0.0; // Hold the total value.
	char ch;           // Hold the operand.
	
	printf("Enter an expression: ");
	scanf("%lf", &ttl);

	while ((ch = getchar()) != '\n'){
		switch (ch){
			case '+':
				scanf("%lf", &crnt);
				ttl = ttl + crnt;
				break;
			case '-':
				scanf("%lf", &crnt);
				ttl = ttl + crnt;
				break;
			case '*':
				scanf("%lf", &crnt);
				ttl = ttl * crnt;
				break;
			case '/':
				scanf("%lf", &crnt);
				ttl = ttl / crnt;
				break;
			default: break;	
			};
		};
	
	printf("Value of expression: %.2lf\n", ttl);

	return 0;
}
