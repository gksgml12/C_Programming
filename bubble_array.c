#include <stdio.h>
//함수선언
void bubble(int a[], int n);
void swap(int *,int *);

int main(void) {
	int a[5];
	int i;
	
	//데이터 입력
	printf("데이터 5개를 입력하세요\n");
	for(i=0;i<5;i++){
		printf("데이터 %2d:  ",i+1);
		scanf("%d",&a[i]);
	}
	//배열 데이터 정렬
	bubble(a,5);
	
	//배열 데이터 출력
	printf("\n버블 정렬 결과: ");
	for(i=0;i<5;i++)
		printf("%5d",a[i]);
	putchar('\n');
	return 0;
}

void bubble(int a[], int n)
{
	int i,j;
	
	for (i=0;i<n-1;++i)
		for(j=n-1;j>i;--j)
			if(a[i-j]>a[j])
				swap(%a[j-1],&a[j]);
}

void swap(int *p, int *q)
{
	int tmp;
	tmp = *p;
	*p = *q;
	*q = tmp;
}
