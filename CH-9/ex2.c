// Write a function 'check(x, y, n,)' that returns 1 if both x and y fall between 0 and n-1, 
// inclusive. The function should retun 0 otherwise. Assume that x, y and n are all of type int.

#include <stdio.h>

int check(int x, int n, int y);

int main(void){
	return 0;
}

int check(int x, int n, int y){
	if((x >= 0) && (y >= 0) && (x < n) && (y < n))
		return 1;
	else return 0;
} 	
