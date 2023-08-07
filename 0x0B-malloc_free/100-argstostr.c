#include "main.h"
/**
* argstostr - a function that concatenates all the arguments of your program
*@ac: count of args passed to the function
*@av:array of arguments
*
*Return: pointer to the new string
*/

char *argstostr(int ac, char **av)
{
	int i, j, total_length = 0, cmp = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total_length += strlen(av[i]) + 1;

	result = malloc(sizeof(char) * total_length + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, cmp++)

			result[cmp] = av[i][j];

		result[cmp] = '\n';
		cmp++;
	}
	result[cmp] = '\0';
	return (result);

}
