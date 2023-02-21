#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
    int n1 = 1;
    int n2 = 2;
    int next_term;
    int i;

    printf("%d, %d, ", n1, n2);

    for (i = 3; i <= 50; i++)
    {
        next_term = n1 + n2;
        printf("%d", next_term);
        if (i != 50)
	{
		printf(", ");
        }
        n1 = n2;
        n2 = next_term;
    }

    printf("\n");
    return 0;
}
