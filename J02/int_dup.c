#include <stdio.h>
#include <stdlib.h>

int *int_dup(int value)
{
    int *n = (int *)malloc(sizeof(value));
    *n = value;
    return n;
}

int main()
{
    int *p = int_dup(11);
    printf("adresse : %p\nvaleur : %d  ", p, *p);
    free(p);
    return 0;
}