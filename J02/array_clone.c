#include <stdio.h>
#include <stdlib.h>


int *array_clone(int *arr, int n)
{
    printf("taille du tableau : %d \n", n);

    int *tab = (int*)malloc(sizeof(n));

    for(int i=0;i<n;i++) {
        *(tab+i) = *(arr+i); 
    }

    return tab;
}

int main()
{   
    int size = 10;
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int *tab = array_clone(arr, size);
    for (int i=0;i<size;i++) {
        printf("%d ", *(tab+i));
    }
    free(tab);
    return 0;
}