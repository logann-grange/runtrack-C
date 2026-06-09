#include <stdio.h>
#include <stdlib.h>

int *sort(int *array)
{
    for(int i=0;i<10;i++) {
        for(int j=0;j<9;j++) {
            if(*(array+j) > *(array+j+1)) {
                int temp = *(array+j);
                *(array+j) = *(array+j+1);
                *(array+j+1) = temp;
            }
        }
    }
    return array;
}

int main()
{
    int array[] = {55, 66, 88, 77, 11, 22, 33, 14, 8, 61};
    int *tab;
    tab = sort(array);
    for(int i=0;i<10;i++) {
        printf("%d ", *(array+i));
    }
    
}