#include "main.h"

/**
* *_strstr - Entry point
* @haystack: function that locates substring
* @needle: locates substring
* Print with _putchar
* Return: a pointer to the beginning of the located substring, or NULL if the substring is not found.
**/
char *_strstr(char *haystack, char *needle)
{
    size_t n = strlen(needle);
    while(*haystack)
        if(!memcmp(haystack++, needle, n))
            return (char *)(haystack - 1);
    return (0);
}
