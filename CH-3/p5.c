#include <stdio.h>

int main(void){
	int num1, num2, num3, num4,
	    num5, num6, num7, num8,
	    num9, num10, num11, num12,
	    num13, num14, num15, num16;

	int row1, row2, row3, row4,
	    col1, col2, col3, col4,
	    dia1, dia2;

	printf("Enter the numbers 1-16 in any order: ");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 
	       &num1, &num2, &num3, &num4,
	       &num5, &num6, &num7, &num8,
	       &num9, &num10, &num11, &num12,
	       &num13, &num14, &num15, &num16);

	printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n"
	       , 
	       num1, num2, num3, num4,
	       num5, num6, num7, num8,
	       num9, num10, num11, num12,
	       num13, num14, num15, num16);

	row1 = num1 + num2 + num3 + num4;
	row2 = num5 + num6 + num7 + num8;
	row3 = num9 + num10 + num11 + num12;
	row4 = num13 + num14 + num15 + num16;

        col1 = num1 + num5 + num9 + num13;
	col2 = num2 + num6 + num10 + num14;
	col3 = num3 + num7 + num11 + num15;
	col4 = num4 + num8 + num12 + num16;

	dia1 = num1 + num6 + num11 + num16;
	dia2 = num13 + num10 + num7 + num4;

	printf("Row sums: %d %d %d %d\n", row1, row2, row3, row4);
	printf("Column sums: %d %d %d %d\n", col1, col2, col3, col4);
	printf("Diagonal sums: %d %d\n", dia1, dia2);	

	return 0;
}
