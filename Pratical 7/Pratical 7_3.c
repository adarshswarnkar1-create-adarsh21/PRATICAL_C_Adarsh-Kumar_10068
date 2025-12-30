#include <stdio.h>
// Adarsh Kumar ERP Id - 10068 //
int main() {
    int i, j;
    for(i = 1; i <= 4; i++) {
        for(j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }
        printf("\n");
    }
    return 0;
}
/*
output :
A
AB
ABC
ABCD
*/