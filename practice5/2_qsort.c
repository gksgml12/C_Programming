// N개의 데이터를 입력받고 정렬한 후 출력하는 프로그램
// 시스템에서 제공하는 qsort함수를 사용한다
// 이때 두 원소를 비교하는 함수는 프로그래머가 구현해야 한다

#include<stdio.h>
#include<stdlib.h>	

#define N 5
enum when {before, after};	
typedef enum when when;	

// 2개의 원소를 비교하는 함수
int compare(const void *vp, const void *vq);
// 배열의 데이터를 출력하는 함수
void prn_array(when val,int a[], int n);

int main(void)
{
	int i;
	int a[N];
		
	printf("정수 %d개를 입력하세요\n", N);
	for( i=0; i<N; i++ )
	{		
		printf( "%2d 번째: ", i+1 );
		scanf( "%d", &a[i] );
	}
	prn_array(before, a, N);

	qsort(a, N, sizeof(int), compare);  // compare는 함수의 이름(함수의 시작주소)
	prn_array(after, a, N);

	return 0;
}

int compare(const void *vp, const void *vq)
{
	const int *p = (int *)vp;
	const int *q = (int *)vq;
	double diff = *p - *q; 

	// 오름차순 정렬
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