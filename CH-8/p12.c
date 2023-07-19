#include <stdio.h>
#include <ctype.h>

int main(void){
	int count = 0;
	int alphabet[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1,
			    8, 5, 1, 3, 1, 1, 3, 10, 1,	
			    1, 1, 1, 4, 4, 8, 4, 10};	
	char ch;

	printf("Enter a word: ");
	
	while((ch = getchar()) != '\n'){
		switch (toupper(ch)){
			case 'A': count += alphabet[0]; break;
			case 'B': count += alphabet[1]; break;
			case 'C': count += alphabet[2]; break;
			case 'D': count += alphabet[3]; break;
			case 'E': count += alphabet[4]; break;
			case 'F': count += alphabet[5]; break;
			case 'G': count += alphabet[6]; break;
			case 'H': count += alphabet[7]; break;
			case 'I': count += alphabet[8]; break;
			case 'J': count += alphabet[9]; break;
			case 'K': count += alphabet[10]; break;
			case 'L': count += alphabet[11]; break;
			case 'M': count += alphabet[12]; break;
			case 'N': count += alphabet[13]; break;
			case 'O': count += alphabet[14]; break;
			case 'P': count += alphabet[15]; break;
			case 'Q': count += alphabet[16]; break;
			case 'R': count += alphabet[17]; break;
			case 'S': count += alphabet[18]; break;
			case 'T': count += alphabet[19]; break;
			case 'U': count += alphabet[20]; break;
			case 'V': count += alphabet[21]; break;
			case 'W': count += alphabet[22]; break;
			case 'X': count += alphabet[23]; break;
			case 'Y': count += alphabet[24]; break;
			case 'Z': count += alphabet[25]; break;
			default: break;
			};
		};
	printf("Scrable value: %d\n", count);

	return 0;
}
