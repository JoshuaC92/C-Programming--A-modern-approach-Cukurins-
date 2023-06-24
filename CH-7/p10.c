#include <stdio.h> 
#include <ctype.h>

int main(void){
	int counter = 0;
	char ch;

	printf("Enter a sentence: ");

	while ((ch = getchar()) != '\n'){
		if (toupper(ch) == 'A' | 
		    toupper(ch) == 'E' | 
	 	    toupper(ch) == 'I' | 
		    toupper(ch) == 'O' |
 		    toupper(ch) == 'U'){
			counter = counter + 1;
			};
		};

	printf("Your sentence contains %d vowels.\n", counter);

	return 0;
} 
