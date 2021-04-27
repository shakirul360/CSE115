/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
void print_2d_array(int rows, int cols, char arr[rows][cols]);
int main(){
    char arr[4][3];
    char a = {{'A', 'B', 'C'}, {'D','G', 'G',}, {'G', 'X', 'Y'}, {'C', 'Q', 'H'});
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            scanf("%c", &arr[i][j]);
        }
    }
    print_2d_array(4,3,arr);

    return 0;
}

void print_2d_array(int rows, int cols, char arr[rows][cols]){
    for (int i = 0; i < rows; i++){             /* printing array loop*/

        for (int j = 0; j < cols; j++){
            printf("%3c", arr[i][j]);
        }
        printf("\n");
    }

}

