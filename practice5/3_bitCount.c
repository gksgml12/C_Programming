#include<stdio.h>
#include<limits.h>

void bit_print(int a);

int main( void )
{
	int num;
	printf( "���ڸ��Է��ϼ���: " );
	scanf("%d", &num);
	bit_print( num );
	return 0;	
}

void bit_print(int a)
{
	int i, cnt = 0;
	int n = sizeof(int) * CHAR_BIT;
	int mask = 1<<(n-1);

	for( i=1; i<=n; ++i )
	{
		putchar(((a & mask) == 0) ? '0' : '1');		
		if( a&mask ) cnt++;		// a�� 1010 mask�� 1000�̶�� a&mask�� 1000�� ������ �ȴ�.
		a<<=1;
		if( ((i % CHAR_BIT) == 0) && (i<n) )
			putchar(' ');
	}		
	printf("\nbitǥ������ 1�� ���� = %d\n", cnt);
}