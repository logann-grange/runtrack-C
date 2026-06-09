#include <stdio.h>

int char_is_digit(char c) 
{
    char digit[10] = {'0','1','2','3','4','5','6','7','8','9'};
    for(int i=0;i<=10;i++) {
        if(digit[i]==c) return 1;
    }
    return 0;
}

int str_is_digit(char *str) {
    int i = 0;
    while(str[i] != '\0') {
        if(char_is_digit(str[i]) == 0)
            return 0;
        i++;
    }
    return 1;
}

int main() 
{
    printf("%d", char_is_digit('1'));
    printf("\n");
    printf("%d", char_is_digit('a'));
    printf("\n\n");
    printf("%d", str_is_digit("azrettf"));
    printf("\n");
    printf("%d", str_is_digit("84565"));
    return 0;
}