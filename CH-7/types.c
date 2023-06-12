#include <stdio.h>

//Demonstrational of types

//The following chars represent the base variations for unsigned integers:
//%u = base 10
//%o = base 8
//%x = base 16

//The above can be prefixed with:
//%h* for short (half)
//%l* for long
//%ll* for long long, only availiable with C99 compiler

int main(void){
	unsigned int u;

	printf("Enter base 16 number: ");
	scanf("%x", &u);

	printf("Base 10: %u\n", u);

	return 0;
}
