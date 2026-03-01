#include <stdio.h>
void main()
{
    int balance = 0, deposit, withdraw, choice, pin;
    printf("Welcome to ABC Bank ATM\n");
    printf("Please enter your 4-digit PIN: ");
    scanf("%d", &pin);

    if (pin==2580)
    {
        printf("PIN accepted. You can now access your account.\n");
        printf("-----ATM MENU----\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Please select an option: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Your current balance is: %d\n", balance);
                printf("Would you like to perform a transaction? (1 for Yes, 0 for No): ");
                int anotherTransaction;
                scanf("%d", &anotherTransaction);
                if (anotherTransaction == 1)
                {
                    printf("Please select an option: ");
                    scanf("%d", &choice);
                }
                else
                {
                    printf("Thank you for using ABC Bank ATM. Goodbye!\n");
                    return;
                }
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%d", &deposit);
                balance = balance + deposit;
                printf("You have successfully deposited %d. New balance is: %d\n", deposit, balance);
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%d", &withdraw);
                if (withdraw > balance)
                {
                    printf("Insufficient funds! Your current balance is: %d\n", balance);
                    printf("Would you like to add fund? (1 for yes 0 for no)");
                    int fundX;
                    if (fundX==1)
                    {
                        printf("Enter amount to deposit: ");
                        scanf("%d", &deposit);
                        balance = balance + deposit;
                        printf("You have successfully deposited %d. New balance is: %d\n", deposit, balance);
                    }
                    else if (fundX==0)
                    {
                        printf("Thank you for using ABC Bank ATM. Goodbye!\n");
                    }
                    else
                    {
                      printf("Please select correct option\n");
                    }
                }
                else
                {
                    balance = balance - withdraw;
                    printf("You have successfully withdrawn %d. New balance is: %d\n", withdraw, balance);
                }
                break;
            case 4:
                printf("Thank you for using ABC Bank ATM. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    else
    {
        printf("Incorrect PIN! Access denied.\n");
    }
}