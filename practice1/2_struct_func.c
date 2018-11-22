#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 3
typedef struct {
	char fname[100];
	int calories;
} Food;

void in_ary( Food ary[], int size );
int totalcal( Food ary[], int size );
int main()
{	
	// 구조체 배열 선언
	Food a[N];
	// 데이터 입력 
	in_ary( a, N );	
	// 칼로리 출력
	printf("총 칼로리는 %d입니다.\n", totalcal(a,N) );
	return 0;
}

void in_ary( Food f[], int size )
{
	int i;
	printf( "데이터(음식이름, 칼로리)를 %d개 입력하세요: \n", N );
	for( i = 0; i < size; i++ )		
		scanf( "%s%d", &f[i].fname, &f[i].calories );
}

int totalcal( Food f[], int size )
{
	int i, sum = 0;	
	for( i = 0; i < size; i++ )	
		sum += f[i].calories;
	return sum;
}