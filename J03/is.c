#pragma once
#include <stdio.h>

int is_digit(char c) 
{
    if (c >= '0' && c <= '9') {
        return 1;
    }
    return 0;

}

int is_lower(char c)
{
    if (c >='a' && c<='z') {
        return 1;
    }
    return 0;
}

int is_upper(char c)
{
    if (c >='A' && c<='Z') {
        return 1;
    }
    return 0;
}

int is_alpha(char c)
{
    if (is_upper(c) || is_lower(c)) {
        return 1;
    }
    return 0;
}

int is_print(char c)
{
    if (c >= 32 && c <= 126)
        return 1;
    return 0;
}
