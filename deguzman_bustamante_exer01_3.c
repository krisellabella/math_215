//Write a program that:
//a. Enter two integers
//b. Displaying their sum, difference, product & quotient
//Liberty Abigayle de Guzman BSMATH-2-A
//Reslyn Bustamante BSMATH-2-A

#include <stdio.h>
int main () {
	float num1, num2, product, quotient;
	int sum, difference;
	printf("enter 1st number:");
	scanf("%f", &num1);
	printf("enter 2nd number:");
	scanf("%f", &num2);
	sum= num1+num2;
	difference= num1-num2;
	product=num1*num2;
	quotient=num1/num2;
	printf("\n sum: %d", sum);
	printf("\n difference: %d", difference);
	printf("\n product: %.2f", product);
	printf("\n quotient: %.2f \n", quotient);
	
	return 0;
	}