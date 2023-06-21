#include <stdio.h>

int main(void){
	int phone;
	char ch;

	printf("Enter phone number: ");
	while ((ch = getchar()) != '\n'){
		switch (ch){
			case 'A': printf("2"); break;
			case 'B': printf("22"); break;
			case 'C': printf("222"); break;
			case 'D': printf("3"); break;
			case 'E': printf("33"); break;
			case 'F': printf("333"); break;
			case 'G': printf("4"); break;
	  		case 'H': printf("44"); break;
	  		case 'I': printf("444"); break;
	  		case 'J': printf("5"); break;
	  		case 'K': printf("55"); break;
	  		case 'L': printf("555"); break;
	  		case 'M': printf("6"); break;
	  		case 'N': printf("66"); break;
	  		case 'O': printf("666"); break;
	  		case 'P': printf("7"); break;
	  		case 'Q': printf("77"); break;
	  		case 'R': printf("777"); break;
	  		case 'S': printf("8"); break;
	  		case 'T': printf("88"); break;
	  		case 'U': printf("888"); break;
	  		case 'V': printf("9"); break;
	  		case 'W': printf("99"); break;
	  		case 'X': printf("999"); break;
			default: break;	
		};
	};
	printf("\n");
	return 0;
}
