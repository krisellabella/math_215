/*Write a program that	:
a.enter 2 integers
b.display their sum, difference (int_1-int_2), quotient & product.
Junalyn Fernandez BS MATH 2A
Bryan Canoy BS MATH 2A
*/

#include<stdio.h>

int main()
{
	
	int num_1,num_2;
	int sum, difference, product;
	float quotient;
	printf("Enter two numbers (the first number should be bigger than the second): ");
	scanf("%d", &num_1);
	scanf("%d", &num_2);
	sum=num_1+num_2;
	difference=num_1-num_2;
	product=num_1*num_2;
	quotient=num_1/num_2;
	printf("The sum is %d\n", sum);
	printf("The difference is %d\n", difference);
	printf("The product is %d\n", product);
	printf("The quotient is %.2f\n", quotient);
	
	return 0;
	}
