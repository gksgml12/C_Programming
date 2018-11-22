#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void file_copy(FILE *ifp, FILE *ofp);
int main (void)
{
	FILE  *ifp, *ofp;
	char fname1[20], fname2[20];
	
	printf("������ ���ϸ��� �Է��ϼ���: ");
	scanf("%s", fname1);

	printf("������ ���ϸ��� �Է��ϼ���: ");
	scanf("%s", fname2);
	
	ifp = fopen(fname1, "r");
	ofp = fopen(fname2, "w");
	
	file_copy(ifp, ofp);

	fclose(ifp);
	fclose(ofp);

	return 0;
}

void file_copy(FILE *ifp, FILE *ofp)
{
	int num;

	while( fscanf(ifp, "%d", &num)==1 )		
	{	
		fprintf( ofp, "%d ", num );
		fprintf( stdout,"%d ", num );
	}	
}