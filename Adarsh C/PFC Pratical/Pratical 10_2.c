#include <stdio.h>
// Adarsh Kumar ERP Id - 10068 //
int main() {
    int a[10][10], n, i, sum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++)
        sum += a[i][i];

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}
/*
output 
Input:
3
1 2 3
4 5 6
7 8 9

Output:
Sum of diagonal elements = 15
*/