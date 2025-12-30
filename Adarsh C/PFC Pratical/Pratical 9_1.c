#include <stdio.h>
    // Adarsh Kumar ERP : 10068 //
int main() {
    int a[100], n, i, temp;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
/*
output 
Input:
5
1 2 3 4 5

Output:
5 4 3 2 1
*/