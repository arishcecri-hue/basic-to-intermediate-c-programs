#include <stdio.h>
void toBase(long long n, int base, char out[]) {
    char digits[] = "0123456789ABCDEF";
    char temp[70];
    int i = 0, j = 0, neg = 0;
    if (n == 0) { out[0] = '0'; out[1] = '\0'; return; }
    if (n < 0) { neg = 1; n = -n; }
    while (n > 0) {
        temp[i++] = digits[n % base];
        n /= base;
    }
    if (neg) out[j++] = '-';
    while (i > 0) out[j++] = temp[--i];   /* reverse remainders */
    out[j] = '\0';
}
int main(void) {
    long long n;
    int base;
    char result[80];
    printf("Enter a decimal number: ");
    scanf("%lld", &n);
    printf("Enter target base (2-16): ");
    scanf("%d", &base);
    if (base < 2 || base > 16) { printf("Base must be between 2 and 16\n"); return 0; }
    toBase(n, base, result);
    printf("Result: %s\n", result);
    return 0;
}
