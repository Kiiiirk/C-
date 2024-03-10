#include<stdio.h>
#include<conio.h>

int main()
{
    int Operand_1, Operand_2, sum;
    printf("Enter the first Operand");
    scanf("%d",&Operand_1);
    printf("Enter the Second Operand");
    scanf("%d",&Operand_2);
    sum=Operand_1+Operand_2;
    printf("The sum of %d and %d is %d",Operand_1, Operand_2, sum);
    
    return 0;
}