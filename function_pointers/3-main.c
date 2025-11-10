#include "3-calc.h"

/**
 * main - entry point of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, or exits with status 98, 99, or 100 on error
 */
int main(int argc, char *argv[])
{
    int (*f)(int, int);
    int num1, num2, result;

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    f = get_op_func(argv[2]);
    if (f == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
    {
        printf("Error\n");
        exit(100);
    }

    result = f(num1, num2);
    printf("%d\n", result);

    return (0);
}
