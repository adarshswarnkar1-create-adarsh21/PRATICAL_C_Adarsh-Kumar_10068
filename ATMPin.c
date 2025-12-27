#include <stdio.h>

int main() {
    int pin = 1234; 
    int enteredPin, attempts = 0;

    while(attempts < 3) {
        printf("Enter your PIN: ");
        scanf("%d", &enteredPin);

        if(enteredPin == pin) {
            printf("Access Granted\n");
            return 0;
        } else {
            printf("Incorrect PIN\n");
            attempts++;
        }
    }

    printf("Card Blocked\n");
    return 0;
}