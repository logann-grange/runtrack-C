#include <stdio.h>

void increment(int *n) 
{
    (*n)++;
}

int main() 
{
    int n = 0;
    increment(&n);
    printf("%d", n);
}