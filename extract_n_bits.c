#include <stdio.h>
int main(void) {
    unsigned int num, mask, result;
    int pos, n;
    printf("Enter number, start position, number of bits: ");
    scanf("%u %d %d", &num, &pos, &n);
    if (pos < 0 || n <= 0 || pos + n > 32) { printf("Invalid position/count\n"); return 0; }
    mask = (n >= 32) ? ~0u : ((1u << n) - 1);
    result = (num >> pos) & mask;
    printf("Extracted value = %u\n", result);
    return 0;
}
