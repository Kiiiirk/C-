#include <stdio.h>

float Tax_Cal(float Salary, float TaxRate)
{
    float tax = Salary * TaxRate;
    return tax;
}

int main()
{
    float TaxAmnt, Balance, Salary, TaxRate = 0.20;
    char ans;
    do {
        printf("Enter salary: ");
        scanf("%f", &Salary);
        printf("Enter balance: ");
        scanf("%f", &Balance);
        TaxAmnt = Tax_Cal(Salary, TaxRate);
        printf("Tax to be collected: %.2f\n", TaxAmnt);
        printf("Another Transaction? [y/n]: ");
        ans = getchar();
    } while (ans != 'n');
    return 0;
}

