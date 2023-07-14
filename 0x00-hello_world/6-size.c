#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    /* Print the sizes of various data types to the console */
    printf("Size of a char: %lu byte(s)\n", sizeof(char));
    printf("Size of an int: %lu byte(s)\n", sizeof(int));
    printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
    printf("Size of a float: %lu byte(s)\n", sizeof(float));

    /* Return 0 to indicate successful completion of the program */
    return (0);
}
