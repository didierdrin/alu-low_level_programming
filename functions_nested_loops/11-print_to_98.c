#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 *
 * Description: Prints numbers separated by comma and space,
 * in ascending or descending order depending on n,
 * ending with 98 followed by a new line.
 */
void print_to_98(int n)
{
    int i;

    if (n <= 98)
    {
        /* Count up from n to 98 */
        for (i = n; i <= 98; i++)
        {
            printf("%d", i);
            if (i != 98)
                printf(", ");
        }
    }
    else
    {
        /* Count down from n to 98 */
        for (i = n; i >= 98; i--)
        {
            printf("%d", i);
            if (i != 98)
                printf(", ");
        }
    }
    printf("\n");
}