#include <stdio.h>
#include <string.h>
int main(void) {
    char s[200], t;
    int i, j;
    printf("Enter a string: ");
    fgets(s, sizeof s, stdin);
    s[strcspn(s, "\n")] = '\0';
    for (i = 0, j = (int)strlen(s) - 1; i < j; i++, j--) {
        t = s[i]; s[i] = s[j]; s[j] = t;
    }
    printf("Reversed: %s\n", s);
    return 0;
}
