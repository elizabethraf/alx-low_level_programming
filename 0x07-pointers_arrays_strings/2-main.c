#include "main.h"

/**
* *_strchr - Entry point
* @s:function that locate a character in a string
* @c:function that locate a character in a string
* Print with _putchar
* Return: a pointer to the memory c and null if the character is not found
**/
int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}

