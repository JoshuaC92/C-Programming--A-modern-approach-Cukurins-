#include <stdio.h>

int main(void){
	int rad = 10;

	float volume = (4.0f / 3.0f) * (rad * rad * rad);
	int volume2 = (4 / 3) * (rad * rad * rad);

	printf("Volume with float: %f\n", volume);
	printf("  Volume with int: %d\n", volume2);

	return 0;
}
