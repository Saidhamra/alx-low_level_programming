#include "main.h"

/**
 * swap_int - Takes in two integer variables and swaps their values.
 * @a: Pointer to the first integer variable.
 * @b: Pointer to the second integer variable.
 *
 * Return: None.
 */
void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
