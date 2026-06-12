#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "is.c"
#include "to.c"
#include "is_str.c"
#include "str_to.c"
#include "sanitize.c"
#include "power.c"
#include "factorial.c"
#include "fibonacci_it.c"
#include "fibonacci_rec.c"
#include "my_atoi.c"



int main()
{

    printf("\n=========== Job 01 ==========");
    printf("\nis_digit(a) -> %d", is_digit('a'));
    printf("\nis_digit(0) -> %d", is_digit('0'));

    printf("\n\nis_lower(a) -> %d", is_lower('a'));
    printf("\nis_lower(A) -> %d", is_lower('A'));

    printf("\n\nis_upper(a) -> %d", is_upper('a'));
    printf("\nis_upper(A) -> %d", is_upper('A'));

    printf("\n\nis_alpha(a) -> %d", is_alpha('a'));
    printf("\nis_alpha(0) -> %d", is_alpha('0'));

    printf("\n\nis_print(5) -> %d", is_print('5'));
    printf("\nis_print(é) -> %d", is_print('é'));


    printf("\n\n\n=========== Job 02 ==========");
    printf("\nswitch_case(a) -> %c", switch_case('a'));
    printf("\nswitch_case(A) -> %c", switch_case('A'));

    printf("\n\n\n=========== Job 03 ==========");
    printf("\nstr_is_digit(a0afsefgh) -> %d", str_is_digit("a0afsefgh"));
    printf("\nstr_is_digit(2126516) -> %d", str_is_digit("2126516"));

    printf("\n\nstr_is_alpha(adafsefgh) -> %d", str_is_alpha("adafsefgh"));
    printf("\nstr_is_alpha(2126516) -> %d", str_is_alpha("2126516"));

    printf("\n\nstr_is_print(adafs05fgh) -> %d", str_is_print("adafs05fgh"));
    printf("\nstr_is_print(adé(-()°$)) -> %d", str_is_print("adé(-()°$)"));

    printf("\n\n\n=========== Job 04 ==========");
    char a[] = "AZERTY";
    char b[] = "AzErTy";

    str_to_lower(a);
    printf("\nstr_to_lower(AZERTY) -> %s", a);

    str_to_upper(a);
    printf("\nstr_to_upper(azerty) -> %s", a);

    str_switch_case(b);
    printf("\nstr_switch_case(AzErTy) -> %s", b);

    printf("\n\n\n=========== Job 05 ==========");
    char d[] = "azfds$£dfé#gd";
    str_sanitize(d);
    printf("\nstr_sanitize(azfds$£dfé#gd) -> %s", d);

    printf("\n\n\n=========== Job 06 ==========");
    printf("\npower(2, 5) -> %d", power(2, 5));

    printf("\n\n\n=========== Job 07 ==========");
    printf("\npower(5) -> %d", factorial(5));

    printf("\n\n\n=========== Job 08 ==========");
    int *tab = fibonacci_it(10);
    free(tab);

    printf("\n\n\n=========== Job 08 ==========");
    int *tab2 = fibonacci_rec(10);
    printf("\nfibonacci_rec(10) ->");
    for (int i=0;i<10;i++) {
        printf(" %d,",*(tab2+i));
    }
    free(tab);

    printf("\n\n\n=========== Job 09 ==========");
    int num = my_atoi("987524");
    printf("\nmy_atoi(987524) -> %d", num);
    
    return 0;
}