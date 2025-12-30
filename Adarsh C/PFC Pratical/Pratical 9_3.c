#include <stdio.h>
// Adarsh Kumar ERP Id - 10068 //
int main() {
    int a[100], n, i, sum = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            sum += a[i];
    }

    printf("Sum of even elements = %d", sum);

    return 0;
}
/*
output 
Input:
6
1 2 3 4 5 6

Output:
Sum of even elements = 12
*/