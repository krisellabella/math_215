//Enter a program that:
//a. Enter grade in Math, Science & English
//b.Display the average
//c. Determine & print if you pass/fail.
//Liberty Abigayle de Guzman BSMATH-2-A
//Reslyn Bustamante BSMATH-2-A

#include <stdio.h>
int main()
{
	float math, english, science, average;
	printf("Enter your Math grade:\t\t");
	scanf("%f", &math);
	printf("Enter your English grade:\t");
	scanf("%f", &english);
	printf("Enter your Science grade:\t");
	scanf("%f", &science);
	
	average = (math + english + science)/3;
	printf("Your Average is %.2f.\n", average);
	if(average >= 75 || average <= 3)
		printf("You passed!!\n");
	else
	    printf("You failed!!\n");
	
	return 0;
}