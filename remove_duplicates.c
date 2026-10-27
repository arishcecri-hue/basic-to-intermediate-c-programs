#include <stdio.h>
int main(void) {
    int a[100], n, i, j, m = 0, dup;
    printf("Enter size: ");
    scanf("%d", &n);
    if (n < 1 || n > 100) { printf("Size must be 1-100\n"); return 0; }
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n; i++) {
        dup = 0;
        for (j = 0; j < m; j++)
            if (a[i] == a[j]) { dup = 1; break; }
        if (!dup) a[m++] = a[i];
    }
    printf("Array without duplicates: ");
    for (i = 0; i < m; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
