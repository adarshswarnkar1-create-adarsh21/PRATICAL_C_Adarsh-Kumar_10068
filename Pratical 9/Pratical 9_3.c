#include <stdio.h>
// Adarsh Kumar ERP Id - 10068 //
int main() {
    int n, i, sum = 0;
    
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }

    printf("Sum of all even elements = %d\n", sum);

    return 0;
}
/*
output :
Enter size of array: 6
Enter 6 elements:
5 8 12 7 10 3
Sum of all even elements = 30
*/