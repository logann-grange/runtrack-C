#include <stdio.h>

void my_strcpy(char *dst, char *src) 
{
    int i;
    for (i = 0; i <=sizeof(src); i++) {
        dst[i] = src[i];
    }
}

int main() 
{
    char *src = "test";
    char dst[sizeof(src) + 1];
    my_strcpy(dst, src);
    printf("%s\n", dst);
    return 0;
}