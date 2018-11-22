#include<stdio.h>

#define ROW 2		
#define COL 5

void in_ary(int a[][COL]);
void out_ary(int a[][COL]);

void main()
{
	int ary[ROW][COL];

	// 함수호출에서 배열을 인자로 전달할 때 
	// 배열이름(시작주소) ary만 명기해야 한다
	in_ary( ary );
	out_ary( ary );
}

// 함수에서 2차원 배열을 매개변수로 입력받을때
// 배열의 열의 크기는 반드시 명기해야 한다
void in_ary(int a[][COL])
{
	int i,j;

	printf( "정수를 %d개를 입력하세요:\n", ROW*COL );
	for( i = 0; i < ROW; ++i )
		for( j = 0; j < COL; ++j)
			scanf( "%d", &a[i][j] );	
}

void out_ary(int a[][COL])
{
	int i, j;

	printf( "\n배열의 각 원소에 2를 곱한값: \n");
	for( i = 0 ; i < ROW ; i++ )
		for( j = 0 ; j < COL; j++ )		
			printf( "%d ", 2 * a[i][j] );

	putchar('\n');	
}