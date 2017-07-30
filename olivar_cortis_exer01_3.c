/*Write a program that:
a.)Enters gradein Math,Science,&English
b.)Display the average &"
c.)Determine & print if you pass/fail.
Amanda Marie A. Cortis BSMATh 2-A
Clayel Joseph B. Olivar BSMATH 2-A
*/
#include<stdio.h>

int main()
{
	int Math,Science,English;
	float Average;
	printf("Please enter your grade in Math\n");
	scanf("%d", &Math);
	printf("Please enter your grade in Science\n");
	scanf("%d", &Science);
	printf("Please enter your grade in English\n");
	scanf("%d", &English);
	Average=(Math+Science+English)/3;
	printf("The average is %.2f\n",Average);
	
	if(Average>=60)
	printf("pass");
	
	else(Average<=60)
	printf("fail");
	return 0;
}