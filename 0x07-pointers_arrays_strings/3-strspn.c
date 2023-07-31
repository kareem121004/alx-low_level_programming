#include "main.h"
#include <stdio.h>

unsigned int _strspn(char *s, char *accept)
{
    int counter = 0;

    while (*s != '\0')
    {
        int is_matched = 0;

        for (char *a = accept; *a != '\0'; a++)
        {
            if (*s == *a)
            {
                is_matched = 1;
                break;
            }
        }

        if (is_matched)
            counter++;
        else
            break;
        s++;
    }

    return counter;
}
