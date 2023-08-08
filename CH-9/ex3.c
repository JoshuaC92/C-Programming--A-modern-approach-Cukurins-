// Write a function, gcd(m, n) that calculates the greatest common divisor of 
// the integers m and n.
// (Programming program 2 in chapter 6 describes Euclids algorithm for 
// computing the GCD.)

#include <stdio.h>

int  gcd(int m, int n);

int main(void){
	int x, y;

	printf("Enter two integers: ");
	scanf("%d %d", &x, &y);

	printf("GCD: %d\n", gcd(x, y));
	return 0;
}

int  gcd(int m, int n){
	int remainder;

	while (m != 0){
		remainder = n % m;
		n = m;
		m = remainder;
	};

	return n;
}
