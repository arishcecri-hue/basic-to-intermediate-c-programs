#include <stdio.h>
int main(void) {
    unsigned int a, b, mask, bitsA, bitsB;
    int pos, n;
    printf("Enter two numbers, start position, number of bits: ");
    scanf("%u %u %d %d", &a, &b, &pos, &n);
    if (pos < 0 || n <= 0 || pos + n > 32) { printf("Invalid position/count\n"); return 0; }
    mask = ((n >= 32) ? ~0u : ((1u << n) - 1)) << pos;
    bitsA = a & mask;
    bitsB = b & mask;
    a = (a & ~mask) | bitsB;
    b = (b & ~mask) | bitsA;
    printf("First  = %u\nSecond = %u\n", a, b);
    return 0;
}
