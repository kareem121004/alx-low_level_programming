#include "main.h"

/**
 * *leet - encode the letter .
 * @str: The input string to be modified.
 * Return: Pointer to the modified string.
*/

#include <stdio.h>

char *leet(char *str)
{
    char leet_chars[] = "AEOTLaeotl";
    char leet_replacements[] = "4307143071";
    
    char *p = str;

    while (*p)
    {
        char *leet_p = leet_chars;
        char *leet_r = leet_replacements;
        
        while (*leet_p)
        {
            if (*p == *leet_p)
            {
                *p = *leet_r;
                break;
            }
            leet_p++;
            leet_r++;
        }
        
        p++;
    }
    
    return str;
}

