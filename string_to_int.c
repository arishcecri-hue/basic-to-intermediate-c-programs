#include <stdio.h>
#include <string.h>
int main(void) {
    char s[64];
    int i = 0, neg = 0, valid = 1;
    long long n = 0;
    printf("Enter a number as a string: ");
    fgets(s, sizeof s, stdin);
    s[strcspn(s, "\n")] = '\0';
    if (s[0] == '-') { neg = 1; i = 1; }
    else if (s[0] == '+') i = 1;
    if (s[i] == '\0') valid = 0;
    for (; s[i] != '\0'; i++) {
        if (s[i] < '0' || s[i] > '9') { valid = 0; break; }
        n = n * 10 + (s[i] - '0');
    }
    if (!valid) { printf("Invalid input\n"); return 0; }
    if (neg) n = -n;
    printf("Integer value = %lld\n", n);
    printf("Value + 1     = %lld\n", n + 1);
    return 0;
}
