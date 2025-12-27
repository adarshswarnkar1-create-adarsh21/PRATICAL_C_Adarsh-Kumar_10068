#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);

    // Upper half
    for(i = n; i >= 1; i--) {
        for(j = 1; j <= n - i; j++)
            printf(" ");
        for(j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    // Lower half
    for(i = 2; i <= n; i++) {
        for(j = 1; j <= n - i; j++)
            printf(" ");
        for(j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
/*
5
*********
 *******
  *****
   ***
    *
   ***
  *****
 *******
*********
 *  Terminal will be reused by tasks, press any key to close it. 
 */