#include <stdio.h>
void main()
{
    char name[100];
    int choice, hours, hoursJ, idle, eff, wage, totwage;
    printf("Welcome to the Cost Determination System\n");
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);
    printf("Choose a service:\n");
    printf("1. Labour Cost\n");
    printf("2. Idle time calculator\n");
    printf("3. Know your efficiency\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("You chose Labour Cost.\n");
        printf("Enter the number of hours worked: ");
        scanf("%d", &hours);
        printf("Enter the hourly wage: ");
        scanf("%d", &wage);
        totwage = hours * wage;
        printf("Total labour cost for %d hours at inr %d/hour is: inr %d\n", hours, wage, totwage);
        printf("Click to exit.\n");
        getchar();
        break;

    case 2:
        printf("You chose Idle time calculator.\n");
        printf("Enter your total hours present in your workplace in hours: ");
        scanf("%d", &hours);
        printf("Enter Your productive hours as per your job card: ");
        scanf("%d", &hoursJ);
        idle = hours - hoursJ;
        printf("Total time spent in your workplace is %d hours and efficient working hours are %d hours\n Idle time is: %d\n", hours, hoursJ, idle);
        printf("Click to exit.\n");
        getchar();
        break;

    case 3:
        printf("You chose Know your efficiency.\n");
        printf("Enter your total hours of efficient works: ");
        scanf("%d", &hours);
        printf("Enter standard hours for that work: ");
        scanf("%d", &hoursJ);
        eff = (hoursJ * 100) / hours;
        printf("Your efficiency is: %d%%\n", eff);
        printf("Click to exit.\n");
        getchar();
        break;

    default:
        printf("Invalid choice.\n");
        printf("Click to exit.\n");
        getchar();
    }
}