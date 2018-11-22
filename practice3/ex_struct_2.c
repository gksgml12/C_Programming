#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	int hour;
	int min;
	int sec;
}TIME;

void elapsedTime( TIME* start, TIME* end, TIME* elapsed );

int main(void)
{
	TIME start, end, elapsed;

	printf("시작시간과 종료시간을 입력하세요: \n");
	scanf("%d:%d:%d",  
				&start.hour, &start.min, &start.sec);
	scanf("%d:%d:%d",
				&end.hour, &end.min, &end.sec);

	elapsedTime( &start, &end, &elapsed );

	printf("\n경과시간은 %02d:%02d%:%02d입니다.\n",
					elapsed.hour, elapsed.min, elapsed.sec);
}

void elapsedTime( TIME* start, TIME* end, TIME* elapsed )
{	

	elapsed->hour	= end->hour - start->hour;
	elapsed->min	= end->min - start->min;
	elapsed->sec	= end->sec - start->sec;

	if( elapsed->sec < 0 ) {
			elapsed->sec += 60;
			elapsed->min--;
	}
	if( elapsed->min < 0 ) {
			elapsed->min += 60;
			elapsed->hour--;
	}
	if( elapsed->hour < 0 ) 
			elapsed->min += 24;		
	
}