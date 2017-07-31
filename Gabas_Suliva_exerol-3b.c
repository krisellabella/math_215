/* Write a program that enters a grade in Math, Science & English.
	Gabas,Mary Rose		BSMATH-2A
	Suvila,Antonio		BSMATH-2A */
#include<stdio.h>
#include<conio.h>

int main()
{
	float math,science,english,per;
	
	printf("Enter a grade for math: ");
	scanf("%f",&math);
	printf("Enter a grade for science: ");
	scanf("%f", &science);
	printf("Enter a grade for english: ");
	scanf("%f", &english);
	
	per = ((math+science+english)/3);
	printf("Average of student = %f\n",per);
	return 0;
}

