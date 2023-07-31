#include "main.h"
size_t _strspn(const char *s, const char *accept)
{
    size_t counter = 0;

    for (; *s; s++)
    {
        int is_matched = 0;

        for (const char *a = accept; *a; a++)
        {
            if (*s == *a)
            {
                is_matched = 1;
                break;
            }
        }

        if (!is_matched)
            break;

        counter++;
    }

    return counter;
}
