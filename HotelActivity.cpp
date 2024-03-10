#include <stdio.h>

#define COST_PER_ROOM 100.00
#define DISCOUNT_10 10.0
#define DISCOUNT_20 20.0
#define DISCOUNT_30 30.0
#define ADDITIONAL_DISCOUNT 5.0

int main() 
{
    double room_cost, sales_tax, discount_percent;
    int num_rooms, num_days;

    printf("Enter the cost of renting one room: ");
    scanf("%lf", &room_cost);

    printf("Enter the number of rooms booked: ");
    scanf("%d", &num_rooms);

    printf("Enter the number of days the rooms are booked: ");
    scanf("%d", &num_days);

    printf("Enter the sales tax (as a percentage): ");
    scanf("%lf", &sales_tax);

    
    if (num_rooms >= 30) {
        discount_percent = DISCOUNT_30;
    } else if (num_rooms >= 20) {
        discount_percent = DISCOUNT_20;
    } else if (num_rooms >= 10) {
        discount_percent = DISCOUNT_10;
    } else {
        discount_percent = 0.0;
    }

    
    double total_cost = room_cost * num_rooms * num_days;

    
    if (num_days >= 3) {
        total_cost *= (100.0 - ADDITIONAL_DISCOUNT) / 100.0;
    }

    
    double discount_amount = total_cost * discount_percent / 100.0;

    
    double subtotal = total_cost - discount_amount;

    
    double sales_tax_amount = subtotal * sales_tax / 100.0;

    
    double total_billing_amount = subtotal + sales_tax_amount;

    
    printf("\nCost of renting one room: %.2f\n", room_cost);
    printf("Discount on each room: %.2f%%\n", discount_percent);
    printf("Number of rooms booked: %d\n", num_rooms);
    printf("Number of days the rooms are booked: %d\n", num_days);
    printf("Total cost of the rooms: %.2f\n", total_cost);
    printf("Sales tax: %.2f%%\n", sales_tax);
    printf("Total billing amount: %.2f\n", total_billing_amount);

    return 0;
}
