#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define N 3
typedef struct {
	char   name[20];
	int    student_id;
	char   grade;
} student;

int countA( student stu[] );

int main(void)
{
	int i;
	// ����ü �迭 ����
	student stu[N];

	// ������ �Է�
	printf( "������(����, �̸�, �й�)�� %d�� �Է��ϼ���:\n", N );
	for( i = 0; i < N; ++i) 	{		
		scanf( "%c%s%d",&stu[i].grade,
						&stu[i].name,
						&stu[i].student_id );
		getchar();
	}

	// ���
	printf("A������ %d���Դϴ�.\n", countA(stu) );
	return 0;
}


int countA( student s[] )
{
	int   i, cnt = 0;
	for ( i = 0; i < N; ++i )
		if ( s[i].grade == 'A' ) cnt++;

	return cnt;
}