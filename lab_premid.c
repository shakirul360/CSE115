#include <stdio.h>

int main(){
    int i, j;
    int diagonals[] = {};
    int arr[][4] = { { 1, 2, 3, 4 },
                     { 5, 6, 7, 8 },
                     { 1, 2, 3, 4 },
                     { 5, 6, 7, 8 } };

    for (i = 0; i < 4; i++){
        printf("%d\n", arr[i][i]);
    }

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            if (i + j == (4 - 1))
                printf("%d\n", arr[i][j]);
        }
    }
    return 0;
}
