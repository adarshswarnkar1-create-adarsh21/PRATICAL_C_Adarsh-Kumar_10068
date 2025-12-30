#include <stdio.h>
// Adarsh Kumar ERP Id - 10068 //
int main() {
    int a[10][10], r, c, i, j, sum;

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < r; i++) {
        sum = 0;
        for (j = 0; j < c; j++)
            sum += a[i][j];
        printf("Row %d sum = %d\n", i + 1, sum);
    }

    return 0;
}
/*
output 
Input:
2 3
1 2 3
4 5 6

Output:
Row 1 sum = 6
Row 2 sum = 15
*/