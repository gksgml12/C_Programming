#include<stdio.h>

#define ROW 2		
#define COL 5

void in_ary(int a[][COL]);
void out_ary(int a[][COL]);

void main()
{
	int ary[ROW][COL];

	// �Լ�ȣ�⿡�� �迭�� ���ڷ� ������ �� 
	// �迭�̸�(�����ּ�) ary�� ����ؾ� �Ѵ�
	in_ary( ary );
	out_ary( ary );
}

// �Լ����� 2���� �迭�� �Ű������� �Է¹�����
// �迭�� ���� ũ��� �ݵ�� ����ؾ� �Ѵ�
void in_ary(int a[][COL])
{
	int i,j;

	printf( "������ %d���� �Է��ϼ���:\n", ROW*COL );
	for( i = 0; i < ROW; ++i )
		for( j = 0; j < COL; ++j)
			scanf( "%d", &a[i][j] );	
}

void out_ary(int a[][COL])
{
	int i, j;

	printf( "\n�迭�� �� ���ҿ� 2�� ���Ѱ�: \n");
	for( i = 0 ; i < ROW ; i++ )
		for( j = 0 ; j < COL; j++ )		
			printf( "%d ", 2 * a[i][j] );

	putchar('\n');	
}