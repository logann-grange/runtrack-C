#include "is.c"

void str_sanitize(char *s)
{
    int i = 0;
    while (*(s+i) != '\0') {
        if (!is_print(*(s+i)))
            *(s+i) = '?';
        i++;
    }
}