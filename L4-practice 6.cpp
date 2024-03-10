#include<stdio.h>
#include<conio.h>
int x;
int main()
{
    int a1, a2, sum, b1, b2, difference, c1, c2, multiplication, d1, d2, division;


    printf("(1)Addition\n");
    printf("(2)Subtraction\n");
    printf("(3)Multiplication\n");
    printf("(4)Division\n");
    printf("(5)Quit\n");
    printf("Enter Choice [1-5]:");
    scanf("%d", &x);
    switch (x) {
    case 1:
        printf("\nInput the 1rst number:");
        scanf("%d",&a1);
        printf("\nInput the 2nd number:");
        scanf("%d",&a2);

        sum=a1 + a2;
        printf("\nThe Sum of %d and %d is %d\n", a1, a2, sum);
        break;
    case 2:
        printf("\nInput the 1rst number:");
        scanf("%d",&b1);
        printf("\nInput the 2nd number:");
        scanf("%d",&b2);
        difference=b1 - b2;
        printf("\nThe Difference of %d and %d is %d\n", b1, b2, difference);
        break;
    case 3:
        printf("\nInput the 1rst number:");
        scanf("%d",&c1);
        printf("\nInput the 2nd number:");
        scanf("%d",&c2);
        multiplication=c1 * c2;
        printf("\nThe Product of %d and %d is %d\n", c1, c2, multiplication);
        break;
    case 4:
        printf("\nInput the 1rst number:");
        scanf("%d",&d1);
        printf("\nInput the 2nd number:");
        scanf("%d",&d2);
        division=d1 / d2;
        printf("\nThe Product of %d and %d is %d\n", d1, d2, division);
        break;
    case 5:
        printf("\nLogging Out...");
        printf("\nBye..");
        break ;

    }
    return 0;
}
