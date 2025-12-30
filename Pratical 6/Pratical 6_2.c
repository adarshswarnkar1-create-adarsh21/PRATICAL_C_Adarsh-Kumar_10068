#include <stdio.h>
// Adarsh Kumar ERP Id - 10068 //
int main() {
    int n, sum = 0;

    printf("Enter the range (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            continue; // Skip odd numbers
        }
        sum += i;
    }

    printf("Sum of even numbers from 1 to %d = %d\n", n, sum);

    return 0;
}
/*
output :
Enter the range (n): 10
Sum of even numbers from 1 to 10 = 30
*/