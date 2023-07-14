#include <stdio.h>

int main(void){
	int hour, min, minsTotal;
	char ind, ind2, ind3;
	
	// Depart-time	Elapsed	Arival-time
	// --------------------------------		
	// 8:00am	480	10:16am		+2:16/136	610
	// 9:43am	583	11:52am		+2:09/129	712
	// 11:19am	679	1:31pm		+2:12/132	811
	// 12:47pm	767	3:00pm		+2:13/133	904
	// 2:00pm	840	4:08pm		+2:08/128	968
	// 3:45pm	945	5:55pm		+2:10/130	1075
	// 7:00pm	1140	9:20pm		+2:20/140	1280
	// 9:45pm	1305	11:58pm		+2:13/133	1438

	int depTimes[8] = {480, 583, 679, (767 - 720), (840 - 720),  (945 - 720), (1140 - 720), (1305 - 720)};
	int arvTimes[8] = {610, 712, (811 - 720), (904 - 720), (968 - 720), (1075 - 720), (1280 - 720), (1438 - 720)};
	int flight;
	
	printf("Enter a 12-hour time: ");
	scanf("%d:%d %c", &hour, &min, &ind);

	if (ind == 'P'){	
		minsTotal = 720 + (60 * hour) + min;
		}
	else minsTotal = (60 * hour) + min;


	if (minsTotal <= 480 + ((583 - 480) / 2)){
		flight = 0; ind2 = 'A'; ind3 = 'A'; 
		}
	else if (minsTotal <= 583 + ((679 - 583) / 2)){
		flight = 1; ind2 = 'A'; ind3 = 'A';
		}
	else if (minsTotal <= 679 + ((767 - 679) / 2)){
		flight = 2; ind2 = 'A'; ind3 = 'P';
		}
	else if (minsTotal <= 767 + ((840 - 767) / 2)){
		flight = 3; ind2 = 'A'; ind3 = 'P';
		}
	else if (minsTotal <= 860 + ((945 - 840) / 2)){
		flight = 4; ind2 = 'P'; ind3 = 'P';
		}
	else if (minsTotal <= 945 + ((1140 - 945) / 2)){
		flight = 5; ind2 = 'P'; ind3 = 'P';
		}
	else if (minsTotal <= 1140 + ((1305 - 1140) / 2)){
		flight = 6; ind2 = 'P'; ind3 = 'P';
		}
	else	{flight = 7; ind2 = 'P'; ind3 = 'P';}

	
	
	printf("Closest departure time is %2.2d:%.2d%cM arriving at %2.2d:%.2d%cM \n",
		depTimes[flight] / 60, depTimes[flight] % 60, ind2,
		arvTimes[flight] / 60, arvTimes[flight] % 60, ind3);

	return 0;
}
