#include <stdio.h>
char scoreToGrade(int score);
int main(void)
{
int a;
printf("점수를입력하세요: ");
scanf("%d", &a);
printf("학점: %c", scoreToGrade(a) );
return 0;
}
char scoreToGrade(int score)
{
if(score>=90)
return 'A';
if(score<=90 && score>=80)
return 'B';
if(score<=80 && score>=70)
return 'C';
if(score<=70 && score>=60)
return 'D';
if(score<60)
return 'E';
}