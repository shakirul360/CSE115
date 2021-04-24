/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
int get_winer(int rows,int cols, char arr[][cols]);

int main(){
    char arr[][3] = {{'X', 'X','O'},{'O','O','X'},{'O','X','O'}};
    int i,j, winner;
    for (i =0 ; i < 3; i++){
        for (j = 0; j < 3; j++)
            printf("%c ", arr[i][j]);
        printf("\n");
    }
    printf("\n");
    winner = get_winer(3,3,arr);
    printf("Winner = %d", winner);
    return 0;
}

int get_winer(int rows,int cols, char arr[][cols]){
    int i, j;

    /* first check row */
    for (i = 0; i < rows; i++){
        if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2]){
            if (arr[i][0] == 'O'){
                return 1;
            } else{
                //printf("%c", 'O');
                return 2;
            }
        }
    }

    /*check cols */

    for (j = 0; j < cols; j++){
        if (arr[0][j] == arr[1][j] && arr[0][j] == arr[2][0]){
            if (arr[0][j] == 'O')
                return 1;
            else
                return 2;
        }
    }

    /* check diagonals */

    if (arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2]){
        if (arr[0][0] == 'O')
                return 1;
            else
                return 2;
    }

    if (arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0]){
        if (arr[0][2] == 'O')
                return 1;
            else
                return 2;
    }
    return 0;


}
