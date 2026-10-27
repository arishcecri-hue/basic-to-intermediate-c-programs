#include <stdio.h>
int main(void) {
    int a[100], b[100], c[200], n1, n2, i = 0, j = 0, k = 0;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter %d sorted elements: ", n1);
    for (i = 0; i < n1; i++) scanf("%d", &a[i]);
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter %d sorted elements: ", n2);
    for (j = 0; j < n2; j++) scanf("%d", &b[j]);
    i = j = 0;
    while (i < n1 && j < n2) c[k++] = (a[i] <= b[j]) ? a[i++] : b[j++];
    while (i < n1) c[k++] = a[i++];
    while (j < n2) c[k++] = b[j++];
    printf("Merged array: ");
    for (i = 0; i < k; i++) printf("%d ", c[i]);
    printf("\n");
    return 0;
}
