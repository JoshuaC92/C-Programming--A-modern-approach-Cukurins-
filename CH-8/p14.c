#include <stdio.h>

int main(void){
	char sentence[100];
	char terminator;
	int length;
	int wordLen = 0;
	int end = 0;
	char ch;

	printf("Enter a sentence: ");
	
	for (int i = 0; end == 0; i++){
		ch = getchar();
		if (ch == '.' || ch == '!' || ch == '?'){
			terminator = ch;
			length = i - 1;
			end = 1;
			break;
			};
		sentence[i] = ch;
		};

	printf("Reversal of sentence: ");

	for (int i = length; i >= 0; i--){
		if (sentence[i] == ' '){
			for (int i2 = 0; i2 <= wordLen; i2++){
				printf("%c", sentence[i + i2]);
				};
			wordLen = 0;
			}	
		else wordLen++;
		};
	
	printf("%c\n", terminator);

	return 0;
}	
