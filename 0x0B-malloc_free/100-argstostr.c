#include "main.h"

/**
* *argstostr - Entry point
* @ac:concatenation of arguements
* @av:concatenates arguements
* Print with _putchar
* Return: null on failure
**/
char *argstostr(int ac, char **av)
{
    int i = 0, a = 0, b = 0, len = 0;
    char *str;

    if (ac == 0)
        return (NULL);

    if  (av == NULL)
        	return (NULL);

    while (ac[i])
        i++;
    while (av[a])
        a++;
    len += ac;
	str = (char *)malloc(b * sizeof(char) * len + 1);
    a = 0;
    if (str == NULL)
        return (NULL);
    len = 0;
    while (len < b)
    {
        if (len < i)
            str[len] = ac[i][len];
        if (len >= i)
        {
            str[len] = av[i][a];
            a++;
        }
        len++;
    }
    str[len] = '\0';
        return (str);
}
