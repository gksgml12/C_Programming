#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	int numerator;
	int denominator;
} FRACTION;

void getFr   (FRACTION* pFr);
void multFr  (FRACTION* pFr1, FRACTION* pFr2, FRACTION* pRes);
void printFr (FRACTION* pFr1, FRACTION* pFr2, FRACTION* pRes);

int	main (void)
{
	FRACTION fr1, fr2, res;

	getFr   (&fr1);		
	getFr   (&fr2);	
	multFr  (&fr1, &fr2, &res);	
	printFr (&fr1, &fr2, &res);
	return 0;
}	

void getFr (FRACTION* pFr)
{
	printf("분수를 입력하세요 (ex. 1/2): ");
	
	// 포인터변수를 사용해서 데이터 입력 방법 2가지	
	scanf ("%d/%d", &pFr->numerator, &(*pFr).denominator); 
}


void multFr  (FRACTION* pFr1, FRACTION* pFr2, FRACTION* pRes)
{
	pRes->numerator		= pFr1->numerator * pFr2->numerator; 
	pRes->denominator	= pFr1->denominator * pFr2->denominator;
}	


void printFr (FRACTION* pFr1, FRACTION* pFr2, FRACTION* pRes)
{
	printf("\n%d/%d * %d/%d = %d/%d\n",
	        pFr1->numerator, pFr1->denominator,
	        pFr2->numerator, pFr2->denominator,
	        pRes->numerator, pRes->denominator);	
}	
