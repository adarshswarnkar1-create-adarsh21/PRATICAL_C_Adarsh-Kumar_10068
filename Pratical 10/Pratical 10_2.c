#include <stdio.h>
// Adarsh Kumar ERP Id - 10068 //
int main() {
    int n, i, j, sum = 0;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int arr[n][n];

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        sum += arr[i][i];
    }

    printf("Sum of diagonal elements = %d\n", sum);

    return 0;
}
/*
output :
Enter size of square matrix (n x n): 3
Enter elements of the matrix:
2 5 3
7 1 8
9 4 6
Sum of diagonal elements = 9
*/