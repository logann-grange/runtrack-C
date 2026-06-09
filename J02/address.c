#include <stdio.h>

void print_address(int *n) 
{
    printf("%p", &n);
}

int main() 
{
    int *n;
    print_address(n);
}