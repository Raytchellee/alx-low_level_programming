#include "main.h"

/**
 * is_palindrome - check for palindrome string
 * @s: input string
 * @idx: left index
 * @idy: right index
 * Return: 0 if false 1 if true
 */

int checkPalindrome(char *s, int idx, int idy)
{
    if (s[idx] == ' '){
        return (0 + checkPalindrome(s, idx + 1, idy));
    }
    if (s[idy] == ' '){
        return (0 + checkPalindrome(s, idx, idy - 1));
    }
    if (idx > idy)
    {
        return (1);
    }
    else if (s[idx] != s[idy])
    {
        return (0);
    }
    else
    {
        (return 0 + checkPalindrome(s, idx + 1, idy - 1));
    }
}

/**
 * getLength - check for length of string
 * @s: input string
 * @idy: input index
 * Return: length.
 */

int getLength(char *s, int idy){
    if (s[idy] != '\0')
    {
       return getLength(s, idy + 1);
    }
    else
    {
        return (idy);
    }
}


/**
 * is_palindrome - check for palindrome string
 * @s: input string
 * Return: 0 if false 1 if true.
 */

int is_palindrome(char *s)
{
    int idx = 0, idy = 0;

    idy = getLength(s, 0);

    return 0 + checkPalindrome(s, idx, idy - 1);
}
