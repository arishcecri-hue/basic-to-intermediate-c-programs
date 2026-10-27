#include <stdio.h>
int main(void) {
    int a[100], n, i, max, min, sl, ss, haveSL = 0, haveSS = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    if (n < 1 || n > 100) { printf("Size must be 1-100\n"); return 0; }
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    max = min = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    for (i = 0; i < n; i++) {
        if (a[i] < max && (!haveSL || a[i] > sl)) { sl = a[i]; haveSL = 1; }
        if (a[i] > min && (!haveSS || a[i] < ss)) { ss = a[i]; haveSS = 1; }
    }
    if (!haveSL) printf("No second largest/smallest: all elements are the same\n");
    else {
        printf("Second largest  = %d\n", sl);
        printf("Second smallest = %d\n", ss);
    }
    return 0;
}
