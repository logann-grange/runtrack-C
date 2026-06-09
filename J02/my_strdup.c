#include <stdio.h>
#include <stdlib.h>

char *my_strdup(char *str) {
    //compteur de taille du tab
    int size = 0;
    while (*(str+size) != '\n') {
        size++;
    }

    char *copy = (char*)malloc(size+1);

    //copi du tab
    for(int i=0;i<size;i++) {
        *(copy+i) = *(str+i);
    }

    return copy;
}

int main()
{
    char *str = "abcdef";

    char *copy = my_strdup(str);
    
    int i=0;
    while(*(copy+i)!='\0') {
        printf("%c", *(copy+i));
        i++;
    }
}