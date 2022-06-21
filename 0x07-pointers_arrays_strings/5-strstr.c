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
	char haystack[] = "Hallow World";
	char needle[] = "World";

	char *world = strstr(haystack, needle);
	putchar("world: %s\n", world);

	char now[] = "now"'
	char *fail = strstr(haystack, now);

	if (fail == NULL)
		putchar("failed to find string!\n");
}
