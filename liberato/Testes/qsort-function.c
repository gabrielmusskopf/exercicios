#include <stdlib.h>
#include <stdio.h>

int comparador(const void *a, const void *b){
    return (*(int *)a - *(int *)b);
}


int main(void){

    int arr[4] = {3, 4, 1, 2};
    
    qsort(&arr, 4, sizeof(int), comparador);

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }
    

} 