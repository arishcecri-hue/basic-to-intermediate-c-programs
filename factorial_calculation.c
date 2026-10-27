#include <stdio.h>
int main(void) {
    int n, i;
    unsigned long long f = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0) { printf("Factorial is not defined for negative numbers\n"); return 0; }
    if (n > 20) { printf("Too large for unsigned long long (max n = 20)\n"); return 0; }
    for (i = 1; i <= n; i++) f *= i;   /* 0! stays 1 */
    printf("%d! = %llu\n", n, f);
    return 0;
}
