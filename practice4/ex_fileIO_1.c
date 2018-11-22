#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main (void)
{
	FILE  *ofp;
	char fname[20];
	int i, num;

	printf("데이터를 출력할 파일명을 입력하세요: ");
	scanf( "%s", fname );

	ofp = fopen( fname, "w" );

	printf("출력할 정수의 범위를 입력하세요: ");
	scanf("%d", &num);
	
	for( i = 1; i < num; i += 2 )	
	{		
		fprintf( stdout, "%d\n", i );
		fprintf( ofp, "%d\n", i);	
	}

	fclose(ofp);

	return 0;
}