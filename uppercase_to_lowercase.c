#include <stdio.h>
#include <string.h>
int main(void) {
    char s[300];
    int i;
    printf("Enter a string: ");
    fgets(s, sizeof s, stdin);
    s[strcspn(s, "\n")] = '\0';
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + ('a' - 'A');
    printf("Lowercase: %s\n", s);
    return 0;
}
