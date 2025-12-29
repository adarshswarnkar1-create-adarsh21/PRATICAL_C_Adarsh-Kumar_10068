#include <stdio.h>

int main() {
    int r, c, i, j;
    int arr[10][10];  

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("Enter array elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int max = arr[0][0];
    int min = arr[0][0];
    int secDiagonalSum = 0;

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(arr[j][i] > max)
                max = arr[j][i];
            if(arr[j][i] < min)
                min = arr[j][i];
        }
    }

    for(i = 0; i < r && i < c; i++) {
        secDiagonalSum += arr[i][c - 1 - i];
    }

    printf("\nMaximum Element: %d", max);
    printf("\nMinimum Element: %d", min);
    printf("\nSum of Secondary Diagonal: %d\n", secDiagonalSum);

    printf("\nRow Wise Sum:\n");
    for(i = 0; i < r; i++) {
        int rowSum = 0;
        for(j = 0; j < c; j++) {
            rowSum += arr[i][j];
        }
        printf("Row %d = %d\n", i + 1, rowSum);
    }

    return 0;
}
/*
output :
Enter number of rows: 3 2 1 4 5 
Enter number of columns: Enter array elements:
1 2 3 4 5 

Maximum Element: 6631033
Minimum Element: 1
Sum of Secondary Diagonal: 9
Row Wise Sum:
Row 1 = 5
Row 2 = 6
Row 3 = 5
PS C:\Users\LENOVO\Desktop\santu vs code\Pratical 10> 
*/