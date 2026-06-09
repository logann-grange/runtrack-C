#include <stdio.h>

int my_strcmp(char *s1, char *s2) 
{
    for (int i=0;i<=sizeof(s1);i++) {
        if(s1[i]>s2[i]) return -1;
        if(s1[i]<s2[i]) return 1;
    }
    return 0;
}

int main() 
{
    char *s1 = "abc";
    char *s2 = "abc";

    printf("%d\n", my_strcmp("abc", "abd"));
    printf("%d\n", my_strcmp("abd", "abc"));
    printf("%d\n", my_strcmp("abc", "abc"));
}