/* Write a program that enters a grade in Math, Science & English.
	Gabas,Mary Rose		BSMATH-2A
	Suvila,Antonio		BSMATH-2A */
#include<stdio.h>
#include<conio.h>

int main()
{
	float math,science,english,per;
	
	printf("Enter a grade for math: ");
	scanf("%f",&math);
	printf("Enter a grade for science: ");
	scanf("%f", &science);
	printf("Enter a grade for english: ");
	scanf("%f", &english);
	
	
	per = ((math+science+english)/3);
	printf("Percentage of student = %f\n",per);
	
	
	if(per>=85) {
		printf("Grade of Student : A+");
	}else if(per<85 && per>=65){
			printf("Grade of Student :A");
				}else if(per<65 && per>=55){
					printf("Grade of Student : B");
					}else if(per<55 && per>=45){
						printf("Grade of Student : C");
					}else if(per<45){
						printf("Grade of Student : fail");
					
			}
	
	getch();
	return 0;
}

