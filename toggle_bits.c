#include <stdio.h>
/* Bit positions are counted from 0 at the least significant bit. */
unsigned int makeMask(int pos, int n) {
    unsigned int m = (n >= 32) ? ~0u : ((1u << n) - 1);
    return m << pos;
}
int main(void) {
    unsigned int num;
    int pos, n;
    printf("Enter number, start position, number of bits: ");
    scanf("%u %d %d", &num, &pos, &n);
    if (pos < 0 || n < 0 || pos + n > 32) { printf("Invalid position/count\n"); return 0; }
    num ^= makeMask(pos, n);
    printf("Result = %u (0x%X)\n", num, num);
    return 0;
}
