#include <stdio.h>
/* Replaces n bits of a (from pos) with the bits of b at the same positions. */
int main(void) {
    unsigned int a, b, mask, result;
    int pos, n;
    printf("Enter two numbers, start position, number of bits: ");
    scanf("%u %u %d %d", &a, &b, &pos, &n);
    if (pos < 0 || n <= 0 || pos + n > 32) { printf("Invalid position/count\n"); return 0; }
    mask = ((n >= 32) ? ~0u : ((1u << n) - 1)) << pos;
    result = (a & ~mask) | (b & mask);
    printf("Result = %u (0x%X)\n", result, result);
    return 0;
}
