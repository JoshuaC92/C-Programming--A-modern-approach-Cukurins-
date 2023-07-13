// This program generates a 10x10 array of '.' chars and then runs a randomly generated
// path over them starting with 'A' and going through to 'B'.

#include <stdio.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	char board[10][10]; 
	int direction;				// 0 - UP | 1 - RIGHT | 2 - DOWN | 3 - LEFT
	int hLoc = 0;				// Horizontal location
	int vLoc = 0;				// Vertical location

	srand((unsigned) time(NULL));		

	// Initialize the board pre run:
	for (int v = 0; v < 10; v++){
		for (int h = 0; h < 10;	h++){
			board[v][h] = '.';
			};
		};

	for (char cnt = 'A'; cnt <= 'Z'; cnt++){
		if (board[vLoc][hLoc] != '.'){
			cnt--; break;
			};
		board[vLoc][hLoc] = cnt;
		direction = rand() % 4;			// Generate the direction 

		while (true) {
            		if ((direction == 0 && vLoc > 0 && board[vLoc - 1][hLoc] == '.') ||
                	    (direction == 1 && hLoc < 9 && board[vLoc][hLoc + 1] == '.') ||
                	    (direction == 2 && vLoc < 9 && board[vLoc + 1][hLoc] == '.') ||
                	    (direction == 3 && hLoc > 0 && board[vLoc][hLoc - 1] == '.')) {
                		break;
            			}
            		direction = rand() % 4;
        		}

		switch (direction) {
			case 0: vLoc = vLoc - 1; break;
			case 1: hLoc = hLoc + 1; break;
			case 2: vLoc = vLoc + 1; break;
			case 3: hLoc = hLoc - 1; break;
			};
		};								
	
	for (int v = 0; v < 10; v++){
		for (int h = 0; h < 10;	h++){
			printf(" %c ", board[v][h]);
			};
		printf("\n");
		};


	printf("\n\nGoodbye!\n\n");
	
	return 0;
} 	
