#include <stdio.h>

int main(void){
	int counter = 0; //Hold value of current word.
	int  sum = 0;    //Hold sum of words.
	int words = 0;     //Hold amount of words.
	char ch;           //Store the character.

	printf("Enter a sentence: ");
	
	while ((ch = getchar()) != '\n'){
		if (ch != ' '){
			counter++;
			}
		else {
			sum = sum + counter;
			words++;
			counter = 0;
			};
		};

	sum = sum + counter;

	words++;	

	printf("Average word length: %.1f\n", (float)sum / words);

	return 0;
}	
