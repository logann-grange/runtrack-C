#pragma once
#include "to.c"
#include "is.c"

void str_to_lower(char *s)
{
    int i = 0;
    while (*(s+i) != '\0') {
        *(s+i) = to_lower(*(s+i));
        i++;
    }
}

void str_to_upper(char *s)
{
    int i = 0;
    while (*(s+i) != '\0') {
        *(s+i) = to_upper(*(s+i));
        i++;
    }
}

void str_switch_case(char *s)
{
    int i = 0;
    while (*(s+i) != '\0') {
        *(s+i) = switch_case(*(s+i));
        i++;
    }
}