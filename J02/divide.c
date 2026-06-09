#include <stdio.h>

void divide(int *val) {
    *val /= 2;
}

int main()
{
    int n = 10;
    int *p = &n;
    divide(p);
    printf("%d", *p);
    return 0;
}