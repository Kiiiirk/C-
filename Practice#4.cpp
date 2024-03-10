#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void clrscr() {
    system("cls");
}
void menu() {
    printf("MENU\n");
    printf("(1) Addition\n");
    printf("(2) Subtraction\n");
    printf("(3) Multiplication\n");
    printf("(4) Division\n");
    printf("(5) Quit\n");
}

void add() {
    int x, y, z;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    z = x + y;
    printf("Sum: %d\n", z);
}

void subtract() {
    int x, y, z;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    z = x - y;
    printf("Difference: %d\n", z);
}

void multiply() {
    int x, y, z;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    z = x * y;
    printf("Product: %d\n", z);
}

void divide() {
    int x, y;
    float z;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    if (y == 0) {
        printf("Error: division by zero\n");
    } else {
        z = (float)x / y;
        printf("Quotient: %.2f\n", z);
    }
}

int main() {
    char ans;
    do {
        clrscr();
        menu();
        printf("Enter your choice: ");
        ans = getche();
        switch(ans) {
            case '1':
                add();
                break;
            case '2':
                subtract();
                break;
            case '3':
                multiply();
                break;
            case '4':
                divide();
                break;
            case '5':
                exit(0);
            default:
                printf("Invalid choice\n");
                break;
        }
        printf("Press any key to continue...");
        getch();
    } while (ans != '5');
    return 0;
}

