// 실수를 N개 입력받고 각각을 제곱해서 출력하기 (1차원배열 사용)
// 입력, 출력은 각각 함수로 구현
#include<stdio.h>
#define N 5
void in_ary(double a[]);
void out_ary(double a[]);

void main()
{
	double ary[N];
	in_ary( ary );
	out_ary( ary );
}

void in_ary(double a[])
{
	int i;
	printf( "실수를 %d개를 입력하세요:\n", N );
	for( i = 0; i < N; ++i )		
			scanf( "%lf", &a[i] );	
}

void out_ary(double a[])
{
	int i;
	printf( "\n배열의 각 원소를 제곱한 값: \n");
	for( i = 0 ; i < N ; i++ )		
			printf( "%.1f ", a[i] * a[i] );
	putchar('\n');	
}