#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, sum = 0;
    char *c;
    for (i = 1; i < argc; ++i) {
        for (c = argv[i]; *c ; c++)
        {
            if (*c < '0' || *c > '9')
            {
                printf("Error\n");
                return (1);
            }
        }
        sum += atoi(argv[i]);
    }
    printf("%d", sum);
    return (0);
}
