
#pragma once
#include <stdio.h>
#include "is.c"

char to_lower(char c) 
{
    if (is_alpha(c))
        return c+32;
    return c;
}

char to_upper(char c)
{
    if (is_alpha(c))
        return c-32;
    return c;
}

char switch_case(char c)
{
    if (c >='a' && c<='z')
        return to_upper(c);
    else if ((c >='A' && c<='Z'))
        return to_lower(c);
    return c;
}

