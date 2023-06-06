#include <stdio.h>

int main(void){
	int areaCode, pref, suf;

	printf("Enter phone number [(xxx) xxx-xxxx]:");
	scanf("(%d) %d-%d", &areaCode, &pref, &suf);
	
	printf("You entered: %d.%d.%d\n", areaCode, pref, suf);
	
	return 0;
}
