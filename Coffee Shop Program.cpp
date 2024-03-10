#include <stdio.h>

#define SMALL_SIZE 9
#define MEDIUM_SIZE 12
#define LARGE_SIZE 15

#define SMALL_COST 87.50
#define MEDIUM_COST 95.00
#define LARGE_COST 100.00

int small_cups_sold = 0;
int medium_cups_sold = 0;
int large_cups_sold = 0;

double total_amount_sold = 0;
double total_money_made = 0;

void print_menu() {
    printf("Welcome to Jason's Coffee Shop!\n");
    printf("Choose an option:\n");
    printf("1. Buy coffee\n");
    printf("2. Show number of cups of each size sold\n");
    printf("3. Show total amount of coffee sold\n");
    printf("4. Show total money made\n");
    printf("5. Exit\n");
}

void sell_coffee(int size, int quantity) {
    double cost_per_cup;
    int* cups_sold_ptr;

    switch (size) {
        case SMALL_SIZE:
            cost_per_cup = SMALL_COST;
            cups_sold_ptr = &small_cups_sold;
            break;
        case MEDIUM_SIZE:
            cost_per_cup = MEDIUM_COST;
            cups_sold_ptr = &medium_cups_sold;
            break;
        case LARGE_SIZE:
            cost_per_cup = LARGE_COST;
            cups_sold_ptr = &large_cups_sold;
            break;
        default:
            printf("Invalid cup size!\n");
            return;
    }

    double amount_sold = quantity * size;
    double money_made = quantity * cost_per_cup;

    *cups_sold_ptr += quantity;
    total_amount_sold += amount_sold;
    total_money_made += money_made;

    printf("Sold %d cups of %d oz at %.2lf pesos each for a total of %.2lf pesos.\n", quantity, size, cost_per_cup, money_made);
}

void show_cups_sold() {
    printf("Small cups sold: %d\n", small_cups_sold);
    printf("Medium cups sold: %d\n", medium_cups_sold);
    printf("Large cups sold: %d\n", large_cups_sold);
}

void show_total_amount_sold() {
    printf("Total amount of coffee sold: %.2lf oz\n", total_amount_sold);
}

void show_total_money_made() {
    printf("Total money made: %.2lf pesos\n", total_money_made);
}

int main() {
    int choice;
    int size, quantity;

    do {
        print_menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter cup size (9, 12, or 15): ");
                scanf("%d", &size);
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                sell_coffee(size, quantity);
                break;
            case 2:
                show_cups_sold();
                break;
            case 3:
                show_total_amount_sold();
                break;
            case 4:
                show_total_money_made();
                break;
            case 5:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}
