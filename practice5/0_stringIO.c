// char���� 2�����迭�� ����Ͽ�
// ���ڿ� N���� �Է¹ް� ����ϱ�
#include<stdio.h>
#define N 7
void main()
{
	char string[N][80];
	int i;

	printf( "�ܾ�(���ڿ�) %d���� �Է��ϼ���:\n", N );
	for( i = 0; i < N; ++i )	
	{
		printf( "%2d��° �ܾ�: " , i+1);
		scanf( "%s", string[i] );  // string[i]�� i��° ���� �����ּ�
	}

	printf( "\n�迭�� ����� ���ڿ� ���: \n");
	for( i = 0; i < N; ++i )		
		printf( "%s ", string[i] );	
	
	putchar('\n');		
}

