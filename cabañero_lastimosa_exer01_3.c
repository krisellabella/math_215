//Enter a program that:
//a.Enters grade in Math, Science & English
//b.Display the average
//c.Determine & print if you pass/fail.
//Herbert Cabañero BSSTAT-1-A
//Jasmel Lastimosa BSMATH-2-A

#include<stdio.h>

int main()
{
	float math,science,english,ave;

	printf("\nEnter grade in Math: ");
	scanf("%f", &math);
	printf("Enter grade in Science: ");
	scanf("%f", &science);
	printf("Enter grade in English: ");
	scanf("%f", &english);
	
	ave=(math+science+english)/3;
	
	if(ave>=60||ave<=3.0)
	printf("\nCongratulations you PASSED! Your average is %.2f.", ave);
	else
	printf("\nSorry you failed, better luck next time. Your average is %.2f.", ave);
	
	return 0;
}