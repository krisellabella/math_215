/*Write a program that:
a.enters grade in Math, Science, & English
b.display the average &
c.determine & print if you pass/fail.
Junalyn Fernandez BS MATH 2A
Bryan Canoy BS MATH 2A
*/

#include<stdio.h>

int main()
{
	
int Math,Science,English;
	      float average;
	
	printf("Please enter your grade in Math\n");
	scanf("%d", &Math);
	printf("Please enter your grade in Science\n");
	scanf("%d", &Science);
	printf("Please enter your grade in English\n");
	scanf("%d", &English);
	
	average=(Math+Science+English)/3;
	printf("Your average is %.2f\n",average);
	
	if(average>=60)
	printf("Pass");
	else(average>=60)
	printf("Fail");
	
	return 0;
	
	}
