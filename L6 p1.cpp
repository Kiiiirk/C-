#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(void)
{
    char string1[80], string2[80];
    fgets(string1, 80, stdin);
    fgets(string2, 80, stdin);

    printf("The length of string1 and string2 are: %d %d\n", strlen(string1), strlen(string2));

    if (strcmp(string1, string2) == 0)
    {
        printf("The strings are equal!!!\n");
    }

    strcat(string1, string2);
    printf("The word using strcat : %s\n", string1);

    strcpy(string1, string2);
    printf("The word using strcpy : %s\n", string1);

    getch();

    return 0;
}

