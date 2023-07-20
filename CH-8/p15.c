#include <stdio.h>

int main(void){
	char msg[80];
	char ch;
	int endflag;
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
	
	for (int i = 0; i <= length; i++){
		printf("%c", msg[i]);
		};
	
	printf("\n");

	printf("Enter a shift amount: ");
	scanf("%d", &shift);

	printf("Encrypted message: ");

	printf("\n");

	return 0;
}
