#include <stdio.h>

int sum_array(int *arr, int n) 
{
    int *p = arr;
    int sum = 0;
    for(int i=0;i<=sizeof(*arr);i++) {
        sum += *(p+i);
    }

    return sum;
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    
    printf("%d", sum_array(arr, 0));
}