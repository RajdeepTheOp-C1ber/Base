#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int exist, pin, choice, balance = 0, transaction, trans1, deposit, withdraw, choac;
    char name[100];
    const int correctPIN = 1221;
    int attempts = 0;

    srand(time(NULL));
    int token = rand() % 100000;

    printf(" Welcome to Online Banking Service\n");
    printf("Are you an existing customer? (Press 1 for Yes, 0 for No): ");
    scanf("%d", &exist);
    getchar();

    // ========== EXISTING CUSTOMER ==========
    if (exist == 1) {
        while (attempts < 3) {
            printf("Enter your 4-digit PIN: ");
            scanf("%d", &pin);
            getchar();

            if (pin == correctPIN) {
                printf("PIN accepted. You can now access your account.\n");

                // ATM menu
                while (1) {
                    printf("\n----- ATM MENU -----\n");
                    printf("1. Check Balance\n");
                    printf("2. Deposit Money\n");
                    printf("3. Withdraw Money\n");
                    printf("4. Exit\n");
                    printf("Select an option: ");
                    scanf("%d", &choice);
                    getchar();

                    switch (choice) {
                        case 1:
                            printf("Your current balance is %d\n", balance);
                            break;

                        case 2:
                            printf("Enter amount to deposit: ");
                            scanf("%d", &deposit);
                            getchar();
                            if (deposit > 0) {
                                balance += deposit;
                                printf("%d deposited. New balance: %d\n", deposit, balance);
                            } else {
                                printf("Invalid deposit amount.\n");
                            }
                            break;

                        case 3:
                            printf("Enter amount to withdraw: ");
                            scanf("%d", &withdraw);
                            getchar();
                            if (withdraw > 0 && withdraw <= balance) {
                                balance -= withdraw;
                                printf("%d withdrawn. New balance: %d\n", withdraw, balance);
                            } else if (withdraw > balance) {
                                printf(" Insufficient funds! Balance: %d\n", balance);
                            } else {
                                printf("Invalid withdrawal amount.\n");
                            }
                            break;

                        case 4:
                            printf(" Thank you for using ABC Bank ATM. Goodbye!\n");
                            printf("Press Enter to exit...");
                            getchar();
                            return 0;

                        default:
                            printf("⚠️ Invalid choice! Please try again.\n");
                    }
                }

            } else {
                attempts++;
                printf(" Wrong PIN! Attempts left: %d\n", 3 - attempts);
            }
        }

        // Lockout after 3 failed attempts
        if (attempts == 3) {
            printf(" Too many failed attempts. Account temporarily locked.\n");
            printf("Press Enter to exit...");
            getchar();
            return 0;
        }

    }
    // ========== NEW CUSTOMER ==========
    else if (exist == 0) {
        printf("Would you like to create an account? (1 for Yes, 2 for No): ");
        scanf("%d", &choac);
        getchar();

        switch (choac) {
            case 1:
                printf("Enter your name: ");
                scanf("%s", name);
                getchar();
                printf(" Your ticket number is: RAJ%05d\n", token);
                printf("Please visit your nearest branch with this ticket number.\n");
                printf("Thanks for choosing us, %s!\n", name);
                break;

            case 2:
                printf("All good — we're here if you change your mind.\n");
                break;

            default:
                printf(" Please select a valid option.\n");
        }
    }
    else {
        printf(" Please select a valid option (only 1 or 0).\n");
    }

    printf("Press Enter to exit...");
    getchar(); 
    return 0;
}