int main(void){
	int x, y, remainder;
	printf("Enter two integers: ");
	scanf("%d %d", &x, &y);

	while (y != 0){
		remainder = x % y;
		x = y;
		y = remainder;
	};

	printf("Greatest common divisor: %d\n", x);

	return 0;
}
