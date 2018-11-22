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
	// 구조체 배열 선언
	student stu[N];

	// 데이터 입력
	printf( "데이터(성적, 이름, 학번)를 %d개 입력하세요:\n", N );
	for( i = 0; i < N; ++i) 	{		
		scanf( "%c%s%d",&stu[i].grade,
						&stu[i].name,
						&stu[i].student_id );
		getchar();
	}

	// 출력
	printf("A학점은 %d명입니다.\n", countA(stu) );
	return 0;
}


int countA( student s[] )
{
	int   i, cnt = 0;
	for ( i = 0; i < N; ++i )
		if ( s[i].grade == 'A' ) cnt++;

	return cnt;
}