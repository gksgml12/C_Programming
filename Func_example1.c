#include <stdio.h>
void printForward( int first, int second, int third);
void printReversed( int first, int second, int third);
int main()
{
int n1, n2, n3;
printf("정수를3개를입력하세요: \n");
scanf("%d %d %d", &n1, &n2, &n3);
printForward(n1, n2, n3);
printReversed(n1, n2, n3);
}
void printForward( int first, int second, int third)
{
printf("입력된정수: %d %d %d\n", first, second, third);
return ;
}
void printReversed( int first, int second, int third)
{
printf("입력한정수의역순: %d %d %d\n", third, second, first);
return ;
}