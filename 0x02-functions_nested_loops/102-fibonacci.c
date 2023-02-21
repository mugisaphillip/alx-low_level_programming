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

    printf("%d, %d, ", n1, n2);  // print the first two terms

    for (i = 3; i <= 50; i++) {  // start the loop from 3rd term
        next_term = n1 + n2;     // calculate the next term
        printf("%d", next_term); // print the next term
        if (i != 50) {           // add comma and space if it's not the last term
            printf(", ");
        }
        n1 = n2;                 // update n1 and n2 for the next iteration
        n2 = next_term;
    }

    printf("\n");               // print a new line

    return 0;
}
