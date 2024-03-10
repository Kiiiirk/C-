#include <stdio.h>

int main(void)
{
float x,y,sum;
char YES, NO;
do 
{
printf ("Enter 1st number:");
scanf ("%f",&x);
printf ("Enter 2nd number:");
scanf ("%f",&y);
sum=x+y;
printf ("Sum:%f\n",sum);
printf ("Proceed another operation [Y/N]?: ");
scanf (" %c", &YES);
}
while (YES == 'y' || YES == 'Y');
while (NO == 'n' || NO == 'N');
printf ("Logging Out...");
scanf (" %c", &NO);
}
