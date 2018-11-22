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

	// �м��Է�
	fr1 = getFr();
	fr2 = getFr();	

	// �м���, ������
	printf("[�񱳰��: %d]\n", fractionCmp(fr1, fr2) );

	return 0;
}	

// �м��� �Է¹޾� ����(��ȯ)�ϴ� �Լ�
FRACTION getFr(void)
{
	FRACTION fr;
	printf("�м��� �Է��ϼ���: ");
	scanf ("%d/%d", &fr.numerator, &fr.denominator);
	return fr;
}	

// �м��� ���ؼ� �񱳰���� ����(��ȯ)�ϴ� �Լ�
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
