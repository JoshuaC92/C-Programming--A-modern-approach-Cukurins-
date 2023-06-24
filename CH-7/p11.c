#include <stdio.h>

int main(void){
	char ch, initial;
	int isFirstInitial = 0;
	int isSecondName = 0;

	printf("Enter a first and last name: ");

	while ((ch = getchar()) != '\n'){
		// Grab the first initial and save for later:
		if (!isFirstInitial && ch != ' '){
			initial = ch;
			isFirstInitial = 1;
			};
		// Find the end of the first name:
		if (isFirstInitial &&  ch == ' '){
			isSecondName = 1;
			};
		// Print the last name:
		if (isSecondName && ch != ' '){
			printf("%c", ch);
			};	
		};
		
	printf(", %c.\n", initial);

	return 0;
}
