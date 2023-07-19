#include <stdio.h>

int main(void){
	char ch, initial;
	int nameCnt = 0;
	char sName[20];
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
		// Store the last name in an array
		if (isSecondName && ch != ' '){
			sName[nameCnt] = ch;
			printf("%d : %c\n", nameCnt, ch);
			nameCnt++;
			printf("%d : %c\n", nameCnt, ch);
			};	
		};
	
	printf("You enterered the name: ");
	
	for (int i = 0; i < nameCnt; i++){
		printf("%c", sName[i]);
		};

	printf(", %c.\n", initial);

	return 0;
}
