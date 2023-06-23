#include <stdio.h>

int main(void){
	int hour, min, minsTotal;
	char ind;
	// Flight table
	// Depart-time	Elapsed	Arival-time
	// --------------------------------		
	// 8:00am	480	10:16am	
	// 9:43am	583	11:52am
	// 11:19am	679	1:31pm
	// 12:47pm	767	3:00pm
	// 2:00pm	840	4:08pm
	// 3:45pm	945	5:55pm
	// 7:00pm	1140	9:20pm
	// 9:45pm	1305	11:58pm

	printf("Enter a 12-hour time: ");
	scanf("%d:%d %c", &hour, &min, &ind);

	if (ind == 'P'){	
		minsTotal = 720 + (60 * hour) + min;
		}
	else minsTotal = (60 * hour) + min;
	
	if (minsTotal <= 480 + ((583 - 480) / 2)){
		printf("Closest departure time is 8:00am arriving at 10:16am\n");
		}
	else if (minsTotal <= 583 + ((679 - 583) / 2)){
		printf("Closest departure time is 9:43am arriving at 11:52am\n");
		}
	else if (minsTotal <= 679 + ((767 - 679) / 2)){
		printf("Closest departure time is 11:19am arriving at 1:31pm\n");
		}
	else if (minsTotal <= 767 + ((840 - 767) / 2)){
		printf("Closest departure time is 12:47am arriving at 3:00pm\n");
		}
	else if (minsTotal <= 860 + ((945 - 840) / 2)){
		printf("Closest departure time is 2:00pm arriving at 4:08pm\n");
		}
	else if (minsTotal <= 945 + ((1140 - 945) / 2)){
		printf("Closest departure time is 3:45pm arriving at 5:55pm\n");
		}
	else if (minsTotal <= 1140 + ((1305 - 1140) / 2)){
		printf("Closest departure time is 7:00pm arriving at 9:20pm\n");
		}
	else printf("Closest departure time is 9:45pm arriving at 11:58pm\n");

	return 0;
}
