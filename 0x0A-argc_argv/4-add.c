#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        printf("0\n");
        return (0);
    }

    int i, sum = 0;

    for (i = 1; i < argc; i++)
    {
        char *c = argv[i];

        while (*c != '\0')
        {
            if (*c < '0' || *c > '9')
            {
                printf("Error\n");
                return (1);
            }
            c++;
        }

        sum += atoi(argv[i]);
    }
    printf("%d\n", sum);
    return (0);
}

