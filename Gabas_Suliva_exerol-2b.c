/* Write a program that display their sum,difference(int_1-int_2)
,quotient,product */
#include<stdio.h>
int main()
{
	int a,b,c,d,s,m,sum;
		printf("Enter two intergers: ");
		scanf("%d%d",&a,&b);
		
		sum=a+b;
		s=a-b;
		d=a/b;
		m=a*b;
		
		printf("The sum of %d and %d=%d\n", a,b,sum);
		printf("The difference of %d and %d=%d\n", a,b,s);
		printf("The quotient of %d and %d=%d\n", a,b,d);
		printf("The product of %d and %d=%d\n" ,a,b,m);
		
	return 0;
		
}

