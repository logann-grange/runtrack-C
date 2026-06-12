#include <stdio.h>
#include <stdlib.h>

int *fibonacci_rec(int n)
{
    if (n <= 0)
        return NULL;
    if (n == 1)
    {
        int *tab = malloc(1 * sizeof(int));
        tab[0] = 0;
        return tab;
    }
    if (n == 2)
    {
        int *tab = malloc(2 * sizeof(int));
        tab[0] = 0;
        tab[1] = 1;
        return tab;
    }
    int *tab = fibonacci_rec(n - 1);
    if (!tab)
        return NULL;
    tab = realloc(tab, n * sizeof(int));
    if (!tab)
        return NULL;
    tab[n - 1] = tab[n - 2] + tab[n - 3];
    return tab;
}