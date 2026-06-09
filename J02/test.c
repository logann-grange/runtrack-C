#include <stdio.h>

int main() {
    int a = 42;
    int *p = &a;
    int **pp = &p;
    printf("p = %d \npp = %d", *p, **pp);
}

