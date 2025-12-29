#include <stdio.h>

int main() {
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[100];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Reversed Array: ");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    int max = arr[0], min = arr[0], evenSum = 0;
    for(i = 0; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] % 2 == 0)
            evenSum += arr[i];
    }

    printf("\nMax: %d", max);
    printf("\nMin: %d", min);
    printf("\nSum of even: %d", evenSum);

    return 0;
}
