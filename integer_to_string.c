#include <stdio.h>
int main(void) {
    long long n;
    unsigned long long u;
    char s[32], t;
    int i = 0, j, neg;
    printf("Enter an integer: ");
    scanf("%lld", &n);
    neg = n < 0;
    u = neg ? -(unsigned long long)n : (unsigned long long)n;
    if (u == 0) s[i++] = '0';
    while (u > 0) {
        s[i++] = '0' + (u % 10);
        u /= 10;
    }
    if (neg) s[i++] = '-';
    s[i] = '\0';
    for (j = 0; j < i / 2; j++) {          /* digits were stored backwards */
        t = s[j]; s[j] = s[i - 1 - j]; s[i - 1 - j] = t;
    }
    printf("String: %s\n", s);
    return 0;
}
