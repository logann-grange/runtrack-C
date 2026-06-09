#include <stdio.h>

int my_strlen(char *c) 
{
    return sizeof(c);
}

int main() 
{
    int size = my_strlen("test");
    printf("%d", size);
    return 0;
}