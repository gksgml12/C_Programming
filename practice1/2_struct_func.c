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
	// ����ü �迭 ����
	Food a[N];
	// ������ �Է� 
	in_ary( a, N );	
	// Į�θ� ���
	printf("�� Į�θ��� %d�Դϴ�.\n", totalcal(a,N) );
	return 0;
}

void in_ary( Food f[], int size )
{
	int i;
	printf( "������(�����̸�, Į�θ�)�� %d�� �Է��ϼ���: \n", N );
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