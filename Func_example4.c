#include <stdio.h>
float add(int num1, int num2);
float subtract(int num1, int num2);
float multiply(int num1, int num2);
float divide(int num1, int num2);
int main(void)
{
int a, b, n;
printf("***********************************\n");
printf("* 1.덧셈 *\n");
printf("* 2.뺄셈 *\n");
printf("* 3.곱셈 *\n");
printf("* 4.나눗셈 *\n");
printf("***********************************\n");
printf("메뉴를선택하세요: ");
scanf("%d", &n);
printf("두수를입력하세요: ");
scanf("%d%d", &a, &b);
if(n==1)
printf( "%f", add(a,b) );
if(n==2)
printf( "%f", subtract(a,b) );
if(n==3)
printf( "%f", multiply(a,b) );
if(n==4)
printf( "%f", divide(a,b) );
return 0;
}
float add(int num1, int num2)
{
return num1+num2;
}
float subtract(int num1, int num2)
{
return num1-num2;
}
float multiply(int num1, int num2)
{
return num1*num2;
}
float divide(int num1, int num2)
{
return (float)num1 / num2;
}