#include <stdio.h>
// Adarsh Kumar ERP Id - 10068 //
int main() {
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Reversed array:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
/*
output :
Enter size of array: 5
Enter 5 elements:
10 20 30 40 50
Reversed array:
50 40 30 20 10
*/