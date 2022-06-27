#include "main.h"

/**
  * mycombos - function main entry
  * @a: amount to change
  * @c: available coins
  * @k: current coins to calculate
  *
  * return: return the total number of coins
**/

int mycombos(int *a, int *c, int k)
{
	int b = 0;
	int i, len;
	len = strlen(c);

	if (*a == 0)
		return 1;

	if (*a < 0)
		return 0;

	for (i = k, i < len; i++)
		b += mycombos(*a - c[i], c, k);

	return (b);
}


