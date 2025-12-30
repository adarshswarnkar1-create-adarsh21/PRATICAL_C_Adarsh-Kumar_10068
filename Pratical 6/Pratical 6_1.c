#include <stdio.h>
// Adarsh Kumar ERP Id - 10068 //
int main() {
    int a, b;
    
    printf("Enter the starting number (a): ");
    scanf("%d", &a);
    
    printf("Enter the ending number (b): ");
    scanf("%d", &b);

    for (int i = a; i <= b; i++) {
        printf("%d ", i);
    }
    
    return 0;
}
/*
output :
Enter the starting number (a): 3
Enter the ending number (b): 8
3 4 5 6 7 8
*/