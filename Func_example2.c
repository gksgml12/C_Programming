#include <stdio.h>
int maximum( int x, int y, int z);
int main()
{
int n1, n2, n3;
printf("정수를3개를입력하세요: \n");
scanf("%d %d %d", &n1, &n2, &n3);
printf("최대값: %d", maximum(n1, n2, n3) );
return 0;
}
int maximum( int x, int y, int z)
{
if(x>y && x>z)
return x;
if(y>x && y>z)
return y;
if(z>x && z>y)
return z;
}