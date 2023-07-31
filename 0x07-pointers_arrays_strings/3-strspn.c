#include "main.h"

size_t _strspn(const char *s, const char *accept)
{
    size_t counter = 0;

    while (*s)
    {
        const char *a = accept;
        while (*a)
        {
            if (*s == *a)
            {
                counter++;
                break;
            }
            a++;
        }

        if (*a == '\0')
            break;

        s++;
    }

    return counter;
}
