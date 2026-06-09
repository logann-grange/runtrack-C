#include <stdio.h>
#include <stdlib.h>

void array_delete(int *arr)
{
    free(arr);
}

int main()
{
    int *arr = (int*)malloc(10);
    array_delete(arr);
    return 0;
}