#include <stdio.h>

int sumOfDigits(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", sumOfDigits(n));
    return 0;
}
/*
output =
5 
5
 *  Terminal will be reused by tasks, press any key to close it.
 */