#include <stdio.h>
#include <stdlib.h>
//함수선언
int findMin(int a[], int size);
int main(void) {
	int *a, i, n, min;
	printf("배열의 크기를 입력하세요: ");
	scanf("%d",&n);
	
	//메모리 동적할당
	a=(int*)calloc(n,sizeof(int));
	//데이터 입력
	printf("\n데이터를 입력하세요.\n",n);
	for(i=0;i<n;i++) {
		printf("데이터%2d: ",i+1);
		scanf("%d",&a[i]);
	}
	//findMin함수 호출
	printf("\n배열에서 최소값은 %d입니다.\n",findMin(a,n));
	//메모리 해제
	free(a);
	return 0;
}

//함수정의
int findMin(int a[], int size)
{
	int min = a[0],i;
	
	for(i=0;i<size;i++)
		if(min>a[i])
			min=a[i];
		
	return min;
}