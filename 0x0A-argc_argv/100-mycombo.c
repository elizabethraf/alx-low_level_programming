#include "main.h"

/**
  * mycombos - function main entry
  * @a: amount to change
  * @c: available coins
  * @k: current coins to calculate
  *
  * return: return the total number of coins
**/

int mycombos(int a, int *c, int k)
{
	int b = 0;
	int len = (int)sizeof(c) / (int)sizeof(c[0]);

	if (a == 0)
		return 1;

	if (a < 0)
		return 0;
	while(c[k] < len)
	{
		if (c[k] == a)
			return 
		b += mycombos(a - 1, c, k);

	return (b);
}


