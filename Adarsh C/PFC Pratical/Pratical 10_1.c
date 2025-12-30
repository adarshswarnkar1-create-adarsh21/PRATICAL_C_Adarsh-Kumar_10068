#include <stdio.h>
// Adarsh Kumar ERP Id - 10068 //
int main() {
    int a[10][10], r, c, i, j;
    int max, min;

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    max = min = a[0][0];

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (a[i][j] > max)
                max = a[i][j];
            if (a[i][j] < min)
                min = a[i][j];
        }
    }

    printf("Max = %d\nMin = %d", max, min);

    return 0;
}
/*
output 
Input:
2 3
1 5 3
9 2 4

Output:
Max = 9
Min = 1
*/