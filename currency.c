#include <stdio.h>
int main()

{
    int amt;
    char curb[5], curt[5];
    printf("Welcome to Currency converter\n");
    printf("----------------------------------------\n");
    printf("Select your base currency\n");
    scanf("%5s", curb);
    printf("Select your target currency\n");
    scanf("%5s", curt);

    switch (curb)
    {
    case 'INR':
        if (curt == 'USD')
        {
            printf("Converting INR to USD\n");
            scanf("%d", &amt);
            printf("Converted amount: %d USD\n", amt * 0.01142);
        }
        else if (curt == 'EUR')
        {
            printf("Converting INR to EUR\n");
            scanf("%d", &amt);
            printf("Converted amount: %d EUR\n", amt * 0.00978);
        }
        else if (curt == 'JPY')
        {
            printf("Converting INR to JPY\n");
            scanf("%d", &amt);
            printf("Converted amount: %d JPY\n", amt * 1.67924);
        }
        else if (curt == 'GBP')
        {
            printf("Converting INR to GBP\n");
            scanf("%d", &amt);
            printf("Converted amount: %d GBP\n", amt * 0.00842);
        }
        else if (curt == 'AUD')
        {
            printf("Converting INR to AUD\n");
            scanf("%d", &amt);
            printf("Converted amount: %d AUD\n", amt * 0.017);
        }
        else if (curt == 'CAD')
        {
            printf("Converting INR to CAD\n");
            scanf("%d", &amt);
            printf("Converted amount: %d CAD\n", amt * 0.015);
        }
        else
        {
            printf("Invalid target currency\n");
        }
        break;
    }
    return 0;
}

// incomplete