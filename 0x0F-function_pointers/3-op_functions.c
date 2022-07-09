#include "3-calc.h"

/**
* op_add - adding function pointer
* @a: function
* @b: function
* Return: a, b always
**/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - subtracting pointers
* @a: function
* @b: function
* Return: a and b always
**/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiply pointer
* @a: function
* @b: function
* Return:a and b always
**/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - dividing parameters
* Return: a and b always
* @a: function
* @b: function
**/
int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - remainder
* Return: a and b always
* @a: function
* @b: function
**/
int op_mod(int a, int b)
{
	return  (a % b);
}

