#include <stdio.h>
void countDigits(long long n, int freq[]) {
    int i;
    for (i = 0; i < 10; i++) freq[i] = 0;
    if (n < 0) n = -n;
    if (n == 0) { freq[0] = 1; return; }
    while (n > 0) {
        freq[n % 10]++;
        n /= 10;
    }
}
int main(void) {
    long long n;
    int freq[10], i;
    printf("Enter an integer: ");
    scanf("%lld", &n);
    countDigits(n, freq);
    for (i = 0; i < 10; i++)
        if (freq[i] > 0) printf("Digit %d : %d time(s)\n", i, freq[i]);
    return 0;
}
