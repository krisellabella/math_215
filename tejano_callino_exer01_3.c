/*Write a program that enters
a. Enters grade in Math, Science and English.
b. Displays the average and
c. Determine and print if you pass/fail.
Tejano, Cleo
Callino, Jan Jan*/

#include<stdio.h>
int main()
{
	float Math, Science, English;
	float ave;

	printf("Enter grade in Math\n");
	scanf("%f", &Math);
	printf("Enter grade in Science\n");
	scanf("%f", &Science);
	printf("Enter grade in English\n");
	scanf("%f", &English);

	ave=(Math+Science+English)/3;
	printf("The average is %.2f\n", ave);

	if (ave>=60)
    	printf("You Pass");

	else
    	printf("You Fail");

	return 0;
}
