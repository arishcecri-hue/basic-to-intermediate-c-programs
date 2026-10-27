#include <stdio.h>
int main(void) {
    int a[100], n, target, i, j, found = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    if (n < 1 || n > 100) { printf("Size must be 1-100\n"); return 0; }
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter target sum: ");
    scanf("%d", &target);
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)           /* j > i: never pairs an element with itself */
            if (a[i] + a[j] == target) {
                printf("(%d, %d)\n", a[i], a[j]);
                found = 1;
            }
    if (!found) printf("No pair found with sum %d\n", target);
    return 0;
}
