#include <stdio.h>
// Adarsh Kumar ERP Id - 10068 //
int main() {
    int pin, attempt;
    int correctPin = 1234; // You can change PIN here
    int maxAttempts = 3;

    for (attempt = 1; attempt <= maxAttempts; attempt++) {
        printf("Enter your ATM PIN: ");
        scanf("%d", &pin);

        if (pin == correctPin) {
            printf("PIN Verified Successfully! Access Granted.\n");
            return 0;
        } else {
            printf("Incorrect PIN! ");
            if (attempt < maxAttempts) {
                printf("Please try again.\n");
            }
        }
    }

    printf("\nYour card has been blocked due to multiple incorrect attempts.\n");

    return 0;
}
/*
output :
Enter your ATM PIN: 1111
Incorrect PIN! Please try again.
Enter your ATM PIN: 2222
Incorrect PIN! Please try again.
Enter your ATM PIN: 1234
PIN Verified Successfully! Access Granted.
*/