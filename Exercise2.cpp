#include<stdio.h>
#include<conio.h>

main ()
{
	float guess=100, x;
	
	printf("Guess a value :");
	scanf("%f", &x);
	if(x==guess) 
	printf("\n Congratulations!!!");
	else if(x<guess) 
	printf("\n Try Higher!!!");
	else if(x>guess)
	printf("\n Lower Please!!!");

	getch();
}
