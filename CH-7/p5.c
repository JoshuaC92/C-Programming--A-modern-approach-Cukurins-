#include <stdio.h>
#include <ctype.h>

int main(void){
	int count = 0;
	char ch;

	printf("Enter a word: ");

	while((ch = getchar()) != '\n'){
		switch (toupper(ch)){
			case 'A': 
			case 'E': 
			case 'I': 
			case 'L': 
			case 'N': 
			case 'O': 
			case 'R':
			case 'S': 
			case 'T': 
			case 'U':
				printf("ADD ONE!\n");
				 count += 1;
				break;
			case 'D': 
			case 'G':
				printf("ADD TWO!\n");
				 count += 2;
				break;
			case 'B': 
			case 'C': 
			case 'M': 
			case 'P':
				printf("ADD THREE!\n");
				 count += 3;
				break;
			case 'F': 
			case 'H': 
			case 'V': 
			case 'W': 
			case 'Y':
				printf("ADD FOUR!\n");
				 count += 4;
				break;
			case 'K':
				printf("ADD FIVE!\n");
				 count += 5;
				break;
			case 'J': 
			case 'X':
				printf("ADD SIX!\n");
				 count += 8;
				break;
			case 'Q': 
			case 'Z':
				printf("ADD SEVEN!\n");
				 count += 10;
				break;
			default: 
				break;
			};
		};
	printf("Scrable value: %d\n", count);

	return 0;
}
