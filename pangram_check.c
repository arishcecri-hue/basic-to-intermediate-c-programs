#include <stdio.h>
#include <string.h>
int main(void) {
    char s[500];
    int seen[26] = {0}, i, pangram = 1;
    printf("Enter a sentence: ");
    fgets(s, sizeof s, stdin);
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') seen[s[i] - 'a'] = 1;
        else if (s[i] >= 'A' && s[i] <= 'Z') seen[s[i] - 'A'] = 1;
    }
    for (i = 0; i < 26; i++)
        if (!seen[i]) { pangram = 0; break; }
    printf("%s\n", pangram ? "The string is a pangram" : "The string is not a pangram");
    return 0;
}
