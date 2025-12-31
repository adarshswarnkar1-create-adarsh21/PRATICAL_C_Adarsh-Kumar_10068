#include <stdio.h>
// Adarsh Kumar ERP Id - 10068 //
void swap(int *a, int *b);

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    printf("%d %d", x, y);
    return 0;
}

void swap(int *a, int *b) {
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
/*
output:
input :
5 10
output :
10 5
*/