#include <stdio.h>
int main(void) {
    int a[100], r[100], n, k, i;
    char dir;
    printf("Enter size: ");
    scanf("%d", &n);
    if (n < 1 || n > 100) { printf("Size must be 1-100\n"); return 0; }
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter positions to rotate: ");
    scanf("%d", &k);
    printf("Direction (L/R): ");
    scanf(" %c", &dir);
    if (k < 0) { printf("Positions must be non-negative\n"); return 0; }
    k %= n;                                   /* handles k larger than n */
    for (i = 0; i < n; i++) {
        if (dir == 'L' || dir == 'l') r[i] = a[(i + k) % n];
        else if (dir == 'R' || dir == 'r') r[(i + k) % n] = a[i];
        else { printf("Invalid direction\n"); return 0; }
    }
    printf("Rotated array: ");
    for (i = 0; i < n; i++) printf("%d ", r[i]);
    printf("\n");
    return 0;
}
