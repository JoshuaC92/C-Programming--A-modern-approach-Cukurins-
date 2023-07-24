#include <stdio.h>

int main(void){
	int n;
	int row = 0;

	printf("Enter a odd number between 1 and 99: ");
	scanf("%d", &n);


	for (row = 0; row < n; row++) {
        	for (col = 0; col < n; col++) {
            		square[row][col] = 0;
        		};
    		};

	int square[n][n];
	int col = n / 2;
	square[row][col] = 1;

	
	return 0;
}		
