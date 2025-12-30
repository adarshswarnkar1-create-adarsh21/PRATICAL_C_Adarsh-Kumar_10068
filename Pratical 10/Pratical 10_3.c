#include <stdio.h>
// Adarsh Kumar ERP Id - 10068 //
int main() {
    int r, c, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int arr[r][c];

    printf("Enter elements of the array:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < r; i++) {
        int sum = 0;
        for(j = 0; j < c; j++) {
            sum += arr[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}
/*
output :
Enter number of rows: 3
Enter number of columns: 3
Enter elements of the array:
2 4 6
1 3 5
7 8 9
Sum of row 1 = 12
Sum of row 2 = 9
Sum of row 3 = 24
*/