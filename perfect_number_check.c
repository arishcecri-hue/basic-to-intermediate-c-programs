#include <stdio.h>
int isPerfect(int n) {
    int i, sum = 0;
    if (n < 2) return 0;
    for (i = 1; i <= n / 2; i++)
        if (n % i == 0) sum += i;
    return sum == n;
}
int main(void) {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("%d is %s\n", n, isPerfect(n) ? "a perfect number" : "not a perfect number");
    return 0;
}
