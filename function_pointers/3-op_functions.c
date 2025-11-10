#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_sub - subtracts b from a
 * @a: first integer
 * @b: second integer
 *
 * Return: result of a - b
 */
int op_sub(int a, int b)
{
    return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_div - divides a by b
 * @a: numerator
 * @b: denominator
 *
 * Return: result of a / b
 */
int op_div(int a, int b)
{
    return (a / b);
}

/**
 * op_mod - calculates the remainder of a / b
 * @a: numerator
 * @b: denominator
 *
 * Return: remainder of a divided by b
 */
int op_mod(int a, int b)
{
    return (a % b);
}
