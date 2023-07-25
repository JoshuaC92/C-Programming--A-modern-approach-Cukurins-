#include <stdio.h>

int main(void){
	int n, count, oldCol, oldRow;
	int col = 0;

	printf("Enter a odd number between 1 and 99: ");
	scanf("%d", &n);
	
	while (n % 2 == 0 | n > 99 | n < 1){
		printf("Not an odd number, or outside range, try again: ");	
		scanf("%d", &n);
		};

	int square[n][n];
	int row = n / 2;
	square[col][row] = 1;
	
	for (int i = 0; i < n; i++) {
       		for (int i2 = 0; i2 < n; i2++) {
           		square[i][i2] = 0;
        		};
    		};


	col = n / 2; 
    	row = 0;
    	square[col][row] = 1;

    	count = 2;
    	while (count <= n * n) {
        	oldCol = col;
        	oldRow = row;
        	if (oldCol + 1 >= n){
            		col = 0;
			}
        	else col = oldCol + 1;
        	
		if (oldRow - 1 < 0){
            		row = n - 1;
			}
        	else row = oldRow - 1;
        
		if (square[col][row] == 0) {
            		square[col][row] = count;
        		} 	
		else {
            		if (oldRow + 1 >= n){
                		square[oldCol][0] = count;
				col = oldCol;	
				row = 0;
				}
            		else square[oldCol][oldRow + 1] = count;
				col = oldCol;
				row = oldRow + 1;
                        }
			count++;
		};

    	for (row = 0; row < n; row++) {
        	for (col = 0; col < n; col++) {
            		printf("%4d", square[col][row]);
        		};
        	printf("\n");
    		}
    
	return 0;
}
