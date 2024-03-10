#include<stdio.h>
int x;
int main()
{

    int rate, rate1, min, smin, smin2;

    printf("(1)If the call is more than 3 minutes");
    printf("\n(2)If the call is equal or below 3 minutes");
    printf("\n(3)Quit");
    printf("\nPlease choose[1-3]:");
    scanf("%d", &x);

    switch (x) {
    case 1:
        printf("\nInput the Duration of Call In Minutes:");
        scanf("%d",&min);
        rate=20 * 3;
        rate1=min - 3;
        smin=rate1 * 4;
        smin2=smin + rate;
        printf("Your bill duration of call in %d minutes is %d PHP", min, smin2);
        break;
    case 2:
        printf("\nInput the Duration of Call In Minutes:");
        scanf("%d",&min);
        rate=20 * min;
        printf("Your bill duration of call in %d minutes is %d PHP", min, rate);
        break;
      case 3:
        printf("\nLogging Out...");
        printf("\nBye..");
        break ; 
    }
    return 0;
    }
