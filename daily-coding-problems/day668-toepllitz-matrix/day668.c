#include <stdio.h>

int main (int argc, char *argv[]){
    
    int matrix[4][5] = {
        {1, 2, 3, 4, 8},
        {5, 1, 2, 3, 4},
        {4, 5, 1, 2, 3},
        {7, 4, 5, 1, 2}
    };

    for (int x = 0; x < 4; x++) {
        int i = 0;
        int j = x;

        while (j < 4) {
           printf("%d \n", matrix[i][j]); 
           i++;
           j++;
        }

        printf("\n");

    }

    return 0;
}
