#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main (void)
{
	FILE  *ofp;
	char fname[20];
	int i, num;

	printf("�����͸� ����� ���ϸ��� �Է��ϼ���: ");
	scanf( "%s", fname );

	ofp = fopen( fname, "w" );

	printf("����� ������ ������ �Է��ϼ���: ");
	scanf("%d", &num);
	
	for( i = 1; i < num; i += 2 )	
	{		
		fprintf( stdout, "%d\n", i );
		fprintf( ofp, "%d\n", i);	
	}

	fclose(ofp);

	return 0;
}