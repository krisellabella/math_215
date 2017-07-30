/*Write a program that
a. Enters 2 integers
b. Display thier sum, difference, quotient, and product.
Tejano, Cleo
Callino, Jan Jan
*/


#include<stdio.h>
int main()
{
	int num1, num2;
	int sum, product, difference, quotient;
	printf("Enter two numbers:(num1 must be greater than num2)\n");
	scanf("%d", &num1);
	scanf("%d", &num2);

	sum=num1+num2;
	product=num1*num2;
	difference=num1-num2;
	quotient=num1/num2;

	printf("The sum is %d", sum);
	printf("\nThe product is %d", product);
	printf("\nThe difference is %d", difference);
	printf("\nThe quotient is %d", quotient);

	return 0;
}

