// char형의 2차원배열을 사용하여
// 문자열 N개를 입력받고 출력하기
#include<stdio.h>
#define N 7
void main()
{
	char string[N][80];
	int i;

	printf( "단어(문자열) %d개를 입력하세요:\n", N );
	for( i = 0; i < N; ++i )	
	{
		printf( "%2d번째 단어: " , i+1);
		scanf( "%s", string[i] );  // string[i]은 i번째 행의 시작주소
	}

	printf( "\n배열에 저장된 문자열 출력: \n");
	for( i = 0; i < N; ++i )		
		printf( "%s ", string[i] );	
	
	putchar('\n');		
}

