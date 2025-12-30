#include <stdio.h>
// Adarsh Kumar ERP Id - 10068 //
int main() {
    int n, i, j, space;
    
    printf("Enter value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for(i = n - 1; i >= 1; i--) {
        for(space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
/*
output :
Enter value of n: 3
  *
 ***
*****
 ***
  *
*/