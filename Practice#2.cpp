#include <stdio.h>

void Tax_Cal(float Salary, float TaxRate, float Balance)
{
    float tax = Salary * TaxRate;
    printf("Tax to be collected: %.2f\n", tax);
}

int main()
{
    float Balance, Salary, TaxRate = 0.20;
    char ans;
    do {
        printf("Enter salary: ");
        scanf("%f", &Salary);
        printf("Enter balance: ");
        scanf("%f", &Balance);
        Tax_Cal(Salary, TaxRate, Balance);
        printf("Another Transaction? [y/n]: ");
        ans = getchar();
    } while (ans != 'n');
    return 0;
}

