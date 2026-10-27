#include <stdio.h>
#include <string.h>
int main(void) {
    char s[200];
    int i, j, pal = 1;
    printf("Enter a string: ");
    fgets(s, sizeof s, stdin);
    s[strcspn(s, "\n")] = '\0';
    for (i = 0, j = (int)strlen(s) - 1; i < j; i++, j--)
        if (s[i] != s[j]) { pal = 0; break; }
    printf("\"%s\" is %s\n", s, pal ? "a palindrome" : "not a palindrome");
    return 0;
}
