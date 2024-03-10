#include <stdio.h>

void displayInfo() {
    printf("Welcome to our fitness center!\n");
    printf("Our membership charges are as follows:\n");
    printf("1 month: $50\n3 months: $120\n6 months: $220\n12 months: $400\n");
    printf("Personal training sessions: $30 per session\n");
    printf("Senior citizens discount: 30%%\n");
    printf("Discount for prepaid memberships: 15%%\n");
    printf("Discount for buying more than 5 personal training sessions: 20%% per session\n");
}


void getInfo(int *months, int *sessions, int *senior) {
    printf("Please enter the number of months for the membership (1/3/6/12): ");
    scanf("%d", months);
    
    printf("Please enter the number of personal training sessions you want: ");
    scanf("%d", sessions);
    
    printf("Are you a senior citizen? (1 for yes, 0 for no): ");
    scanf("%d", senior);
}


float calculateCost(int months, int sessions, int senior) {
    float total = 0;
    
    
    switch(months) {
        case 1:
            total += 50;
            break;
        case 3:
            total += 120;
            break;
        case 6:
            total += 220;
            break;
        case 12:
            total += 400;
            break;
        default:
            printf("Invalid number of months entered.\n");
            return 0;
    }
    
    
    if (senior) {
        total *= 0.7;
    }
    
    
    if (months >= 12) {
        total *= 0.85;
    }
    
    
    if (sessions > 5) {
        total += (sessions - 5) * 30 * 0.8 + 5 * 30;
    } else {
        total += sessions * 30;
    }
    
    return total;
}


int main() {
    int months, sessions, senior;
    float cost;
    
    displayInfo();
    getInfo(&months, &sessions, &senior);
    cost = calculateCost(months, sessions, senior);
    
    printf("The cost of your membership is: $%.2f\n", cost);
    
    return 0;
}

