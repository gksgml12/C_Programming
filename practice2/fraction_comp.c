#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	int numerator;
	int denominator;
} FRACTION;

FRACTION getFr(void);
int fractionCmp (FRACTION fr1, FRACTION fr2);


int main(void)
{
	FRACTION fr1;
	FRACTION fr2;	

	// 분수입력
	fr1 = getFr();
	fr2 = getFr();	

	// 분수비교, 결과출력
	printf("[비교결과: %d]\n", fractionCmp(fr1, fr2) );

	return 0;
}	

// 분수를 입력받아 리턴(반환)하는 함수
FRACTION getFr(void)
{
	FRACTION fr;
	printf("분수를 입력하세요: ");
	scanf ("%d/%d", &fr.numerator, &fr.denominator);
	return fr;
}	

// 분수를 비교해서 비교결과를 리턴(반환)하는 함수
int fractionCmp (FRACTION fr1, FRACTION fr2)
{
	float a;
	float b;

	a = (float) fr1.numerator / fr1.denominator;
	b = (float) fr2.numerator / fr2.denominator;
	
	if ( a == b )
		return 0;
	else if (a < b)
		return -1;
	else
		return 1;
	
} 
