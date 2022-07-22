#include "main.h"

/**
* get_endianness - check code
*
* Return: 0 if big endian, 1 if little endian
**/
int get_endianness(void)
{
	uint8_t data[4];
	int k;

	for (k = 0; k < 4; k++)
	{
		data[k] = 0x00 + k;
	}
	switch (*((uint32_t *)data))
	{
		case 0x00010203:
			return (0);
		case 0x03020100:
			return (1);
		default:
			return (-1);
	}
}
