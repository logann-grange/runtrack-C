#pragma once
#include <stdio.h>
#include <stdlib.h>

int *fibonacci_it(int n)
{
    int *tab = malloc(sizeof(int)*n);
    *tab = 0;
    *(tab+1) = 1;
    printf("\n%d, %d, ", *tab, *(tab+1));
    for (int i=2;i<n;i++) {
        *(tab+i) = *(tab+i-1) +*(tab+i-2);
        printf("%d, ", *(tab+i));
    }
    return tab;
}