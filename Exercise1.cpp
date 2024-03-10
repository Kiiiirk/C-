#include<stdio.h>
#include<conio.h>

int main ()
{
	float subject_math,subject_english;
	float avg;
	
	printf(" enter the grade of math :");
	scanf("%f", &subject_math);
	printf(" enter the grade of english :");
	scanf("%f", &subject_english);
	avg = (subject_math+subject_english/2);
	printf("\n the average mark  is: %.2f", avg);
	
	if(avg<=75) 
	printf("\n Grade : Fail");
	else if(avg>=75) 
	printf("\n Grade : Pass ");

	getch();
}
