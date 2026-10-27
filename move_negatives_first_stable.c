#include <stdio.h>
int main(void) {
    int a[100], t[100], n, i, k = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    if (n < 1 || n > 100) { printf("Size must be 1-100\n"); return 0; }
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n; i++) if (a[i] < 0) t[k++] = a[i];    /* negatives, in order */
    for (i = 0; i < n; i++) if (a[i] >= 0) t[k++] = a[i];   /* zero/positives, in order */
    printf("Rearranged array: ");
    for (i = 0; i < n; i++) printf("%d ", t[i]);
    printf("\n");
    return 0;
}
