#include<stdio.h>
#include<limits.h>

void bit_print(int a);

int main( void )
{
	int num;
	printf( "숫자를입력하세요: " );
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
		if( a&mask ) cnt++;		// a가 1010 mask가 1000이라면 a&mask는 1000로 참값이 된다.
		a<<=1;
		if( ((i % CHAR_BIT) == 0) && (i<n) )
			putchar(' ');
	}		
	printf("\nbit표현에서 1의 개수 = %d\n", cnt);
}