#include <stdio.h>
#include <string.h>
int main(void) {
    char s[300];
    int i, j = 0;
    printf("Enter a sentence: ");
    fgets(s, sizeof s, stdin);
    s[strcspn(s, "\n")] = '\0';
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ' && i > 0 && s[i - 1] == ' ') continue;  /* skip repeated space */
        s[j++] = s[i];
    }
    s[j] = '\0';
    printf("Result: %s\n", s);
    return 0;
}
