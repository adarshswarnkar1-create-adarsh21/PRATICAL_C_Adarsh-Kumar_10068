#include <stdio.h>
// Adarsh Kumar ERP Id - 10068 //
int main() {
    int a[100], n, i;
    int max, min;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = min = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }

    printf("Max = %d\nMin = %d", max, min);

    return 0;
}
/*
outpu 
Input:
5
3 7 1 9 4

Output:
Max = 9
Min = 1
*/