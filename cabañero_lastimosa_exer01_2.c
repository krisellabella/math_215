//Write a program that:
//a.Enter two integers
//b.Dispaying their sum, difference, product & quotient
//Herbert Cabañero BSSTAT-1-A
//Jasmel Lastimosa BSMATH-2-A

#include<stdio.h>

void main()
{
	float int_1, int_2, sum, difference, product, quotient; 
	
	printf("\nEnter two numbers: ");
	scanf("%f %f", &int_1,&int_2);
	
	sum=int_1+int_2;
	difference=int_1-int_2;
	product=int_1*int_2;
	
	printf("\nThe sum is %.2f", sum);
	printf("\nThe difference is %.2f", difference);
	printf("\nThe product is %.2f .\n",product);
	
	if(int_2!=0)
	{
		quotient=int_1/int_2;
		printf("The quotient is %.4f .", quotient);
	}
	else 
	{
	printf("The quotient is undefine.");
	}
}	