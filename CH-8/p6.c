#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 100				// Maximum message length

int main(void){
	char c; 				// store character 
	int aLen = 0;				// store the array length 
	char comm[MAX_LENGTH];			// define array

	printf("Enter message: ");
	
	for (int i = 0; c != '\n'; i++){
		c = getchar();
		comm[i] = c;
		aLen = i;
		};

	printf("\n");
	printf("In B1FF-speak: ");
	
	for (int i = 0; i < aLen ; i++){
		switch (toupper(comm[i])){
			case 'A': printf("4"); break;
			case 'B': printf("8"); break;
			case 'E': printf("3"); break;
			case 'I': printf("1"); break;
			case 'O': printf("0"); break;
			case 'S': printf("5"); break;
			default: printf("%c", toupper(comm[i]));
			}; 
		};	

	printf("!!!!!!!!!\n");

	return 0;
}
