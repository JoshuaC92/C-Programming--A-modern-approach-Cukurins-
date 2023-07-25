#include <stdio.h>

int main(void){
	int n, count, oldRow, oldCol;
	int row = 0;

	printf("Enter a odd number between 1 and 99: ");
	scanf("%d", &n);


	int square[n][n];
	int col = n / 2;
	square[row][col] = 1;
	
	for (int i = 0; i < n; i++) {
       		for (int i2 = 0; i2 < n; i2++) {
           		square[i][i2] = 0;
        		};
    		};


	row = n / 2; 
    	col = 0;
    	square[row][col] = 1;

    	count = 2;
    	while (count <= n * n) {
        	oldRow = row;
        	oldCol = col;
        	if (oldRow + 1 >= n){
            		row = 0;
			}
        	else row = oldRow + 1;
        	
		if (oldCol - 1 < 0){
            		col = n - 1;
			}
        	else col = oldCol - 1;
        
		if (square[row][col] == 0) {
            		square[row][col] = count++;
        		} 	
		else {
            		if (oldCol + 1 >= n){
                		square[oldRow][0] = count++;
				row = oldRow;	
				col = 0;
				}
            		else square[oldRow][oldCol + 1] = count++;
				row = oldRow;
				col = oldCol + 1;
                        }
		};

    	for (col = 0; col < n; col++) {
        	for (row = 0; row < n; row++) {
            		printf("%4d", square[row][col]);
        		};
        	printf("\n");
    		}
    
	return 0;
}
