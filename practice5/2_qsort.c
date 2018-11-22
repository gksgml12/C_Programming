// N���� �����͸� �Է¹ް� ������ �� ����ϴ� ���α׷�
// �ý��ۿ��� �����ϴ� qsort�Լ��� ����Ѵ�
// �̶� �� ���Ҹ� ���ϴ� �Լ��� ���α׷��Ӱ� �����ؾ� �Ѵ�

#include<stdio.h>
#include<stdlib.h>	

#define N 5
enum when {before, after};	
typedef enum when when;	

// 2���� ���Ҹ� ���ϴ� �Լ�
int compare(const void *vp, const void *vq);
// �迭�� �����͸� ����ϴ� �Լ�
void prn_array(when val,int a[], int n);

int main(void)
{
	int i;
	int a[N];
		
	printf("���� %d���� �Է��ϼ���\n", N);
	for( i=0; i<N; i++ )
	{		
		printf( "%2d ��°: ", i+1 );
		scanf( "%d", &a[i] );
	}
	prn_array(before, a, N);

	qsort(a, N, sizeof(int), compare);  // compare�� �Լ��� �̸�(�Լ��� �����ּ�)
	prn_array(after, a, N);

	return 0;
}

int compare(const void *vp, const void *vq)
{
	const int *p = (int *)vp;
	const int *q = (int *)vq;
	double diff = *p - *q; 

	// �������� ����
	return ((diff >= 0.0) ? ((diff> 0.0) ? +1 : 0) : -1);	
}




void prn_array(when val, int a[], int n)
{
	int i;
	printf("%s%s", ((val == before) ? "Before " : "After "), "sorting :" );
	
	for(i=0; i<n; ++i)
	{
		if( i % 5 == 0 ) putchar('\n');
		printf( "%12d", a[i] );
	}
	putchar('\n');
}