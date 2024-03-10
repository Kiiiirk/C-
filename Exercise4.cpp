#include <stdio.h>

int main()
{
    int grades;

    printf("Input grades: ");
    scanf("%d", &grades);

        if (grades<75)
	{
        printf("Grade = F");
    }
    else if (grades <= 80)
	{
        printf("Grade = E");
    }
     else if(grades <= 85)
	 {
        printf("Grade = D");
    }
    else if(grades <=90)
	{
        printf("Grade = C");
    }
    else if(grades<=95)
	{
        printf("Grade = B");
    }
    else if (grades <=100)
	{
        printf("Grade = A");
    }
    else {
        printf("Invalid");
    }
    return 0;
}
