#include <stdio.h>
#include <string.h>

int is_palindrome(char s[]) 
{
    int start = 0;
    int end = strlen(s) - 1;
    while (start < end) {
        if (s[start] != s[end]) {
            return 0; // not a palindrome
        }
        start++;
        end--;
    }
    return 1; // palindrome
}

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);
    if (is_palindrome(s)) {
        printf("%s is a palindrome\n", s);
    } else {
        printf("%s is not a palindrome\n", s);
    }
    return 0;
}
