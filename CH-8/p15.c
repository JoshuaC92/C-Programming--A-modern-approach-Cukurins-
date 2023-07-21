#include <stdio.h>
#include <ctype.h>

int main(void){
	char msg[80];
	char ch;
	int endflag = 0;
	int shift;
	int length;
	
	printf("Enter a message to be encrypted: ");

	for (int i = 0; endflag == 0; i++){
		ch = getchar();
		if (ch == '\n'){
			length = i - 1;
			endflag = 1;
			break;
			};
		msg[i] = ch;
		};
	
	printf("\n");

	printf("Enter a shift amount: ");
	scanf("%d", &shift);

	printf("Encrypted message: ");
	
	for (int i = 0; i <= length; i++){
		ch = msg[i]; 
		if ( islower(ch) ){ 
			printf("%c", ((ch - 'a') + shift)  % 26 + 'a');
			}
		else if ( isupper(ch) ){
			printf("%c", ((ch - 'A') + shift)  % 26 + 'A');
			}
		else printf("%c", ch);
		};

	printf("\n");

	return 0;
}
