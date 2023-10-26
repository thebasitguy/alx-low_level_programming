#include "main.h"

/**
  * _pow_recursion - function that returns
  * the value of x raised to the power of y
  *
  * @x: parameter
  * @y: exponent value
  *
  * Return: result of numbers passed to the function
  */


int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));

return (0);
}

