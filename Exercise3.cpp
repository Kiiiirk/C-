#include <stdio.h>
#include <conio.h>

main()
{
	char answer;
	do
{
	printf("Would you like to continue? : ");
	printf("\n Press Y for Yes & N for No : ");
	answer = getch();
} 
while (answer!= 'n' && answer!= 'N');
printf("Goodbye...");
return 0;
}

