// Test weather 2 words, input by user, are anagrams
#include <stdio.h>

int main(void){
	int w1[26] = {0,0,0,0,0,0,0,0,0,
		      0,0,0,0,0,0,0,0,0,
		      0,0,0,0,0,0,0,0};
	char ch1, ch2;	
	int notAnaflag = 0; 

	printf("Enter first word: ");
	for ( int i = 0; ch1 != '\n'; i++){
		ch1 = getchar();
		if (ch1 == '\n'){
			break;
			};
		switch (ch1) {
			case 'a' : w1[0]++; break;
			case 'b' : w1[1]++; break;
			case 'c' : w1[2]++; break;
			case 'd' : w1[3]++; break;
			case 'e' : w1[4]++; break;
			case 'f' : w1[5]++; break;
			case 'g' : w1[6]++; break;
			case 'h' : w1[7]++; break;
			case 'i' : w1[8]++; break;
			case 'j' : w1[9]++; break;
			case 'k' : w1[10]++; break;
			case 'l' : w1[11]++; break;
			case 'm' : w1[12]++; break;
			case 'n' : w1[13]++; break;
			case 'o' : w1[14]++; break;
			case 'p' : w1[15]++; break;
			case 'q' : w1[16]++; break;
			case 'r' : w1[17]++; break;
			case 's' : w1[18]++; break;
			case 't' : w1[19]++; break;
			case 'u' : w1[20]++; break;
			case 'v' : w1[21]++; break;
			case 'w' : w1[22]++; break;
			case 'x' : w1[23]++; break;
			case 'y' : w1[24]++; break;
			case 'z' : w1[25]++; break;
			};
		};

	printf("Enter second word: ");
	for ( int i = 0; ch2 != '\n'; i++){
		ch2 = getchar();
		if (ch2 == '\n'){
			break;
			};
		switch (ch2) {
			case 'a' : w1[0]--; break;
			case 'b' : w1[1]--; break;
			case 'c' : w1[2]--; break;
			case 'd' : w1[3]--; break;
			case 'e' : w1[4]--; break;
			case 'f' : w1[5]--; break;
			case 'g' : w1[6]--; break;
			case 'h' : w1[7]--; break;
			case 'i' : w1[8]--; break;
			case 'j' : w1[9]--; break;
			case 'k' : w1[10]--; break;
			case 'l' : w1[11]--; break;
			case 'm' : w1[12]--; break;
			case 'n' : w1[13]--; break;
			case 'o' : w1[14]--; break;
			case 'p' : w1[15]--; break;
			case 'q' : w1[16]--; break;
			case 'r' : w1[17]--; break;
			case 's' : w1[18]--; break;
			case 't' : w1[19]--; break;
			case 'u' : w1[20]--; break;
			case 'v' : w1[21]--; break;
			case 'w' : w1[22]--; break;
			case 'x' : w1[23]--; break;
			case 'y' : w1[24]--; break;
			case 'z' : w1[25]--; break;
			};		
		};

	for (int i =0; i < 26; i++){
		if (w1[i] != 0){
			i = 27;
			notAnaflag = 1;	
			break;
			};
		};

	if (notAnaflag == 1){
		printf("The words are NOT anagrams.");
		}
	else printf("The words are anagrams.");	

	printf("\n");
					
	return 0;
}
