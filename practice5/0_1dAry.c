// �Ǽ��� N�� �Է¹ް� ������ �����ؼ� ����ϱ� (1�����迭 ���)
// �Է�, ����� ���� �Լ��� ����
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
	printf( "�Ǽ��� %d���� �Է��ϼ���:\n", N );
	for( i = 0; i < N; ++i )		
			scanf( "%lf", &a[i] );	
}

void out_ary(double a[])
{
	int i;
	printf( "\n�迭�� �� ���Ҹ� ������ ��: \n");
	for( i = 0 ; i < N ; i++ )		
			printf( "%.1f ", a[i] * a[i] );
	putchar('\n');	
}