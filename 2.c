/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
void countConsonants(int row, int col, char letters[row][col], int *countConsonants);
void print_2d_array(int rows, int cols, char arr[rows][cols]);

int main(){
    int i, j, count = 0;

    char letters[4][3];

    for (i = 0; i < 4; i++){
        for (j = 0; j < 3; j++){
            scanf(" %c", &letters[i][j]);
        }
    }

    print_2d_array(4,3,letters);
    countConsonants(4,3,letters,&count);
    printf("Number of consonants = %d\n", count);
    return 0;
}
void countConsonants(int row, int col, char letters[row][col], int *countConsonants){
    int i, j;
    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++){
            switch (letters[i][j]){
                case 'B':
                    *countConsonants += 1;
                    break;
                case 'C':
                    *countConsonants += 1;
                    break;
                case 'D':
                    *countConsonants += 1;
                    break;
                case 'F':
                    *countConsonants+= 1;
                    break;
                case 'G':
                    *countConsonants += 1;
                    break;
                case 'J':
                    *countConsonants += 1;
                    break;
                case 'K':
                    *countConsonants += 1;
                    break;
                case 'L':
                    *countConsonants += 1;
                    break;
                case 'M':
                    *countConsonants += 1;
                    break;
                case 'N':
                    *countConsonants += 1 ;
                    break;
                case 'P':
                    *countConsonants += 1;
                    break;
                case 'Q':
                    *countConsonants += 1;
                    break;
                case 'S':
                    *countConsonants += 1;
                    break;
                case 'T':
                    *countConsonants += 1;
                    break;
                case 'V':
                    *countConsonants += 1;
                    break;
                case 'X':
                    *countConsonants += 1;
                    break;
                case 'Z':
                    *countConsonants += 1;
                    break;
                case 'H':
                    *countConsonants+= 1;
                    break;
                case 'R':
                    *countConsonants+= 1;
                    break;
                case 'W':
                    *countConsonants+= 1;
                    break;
                case 'Y':
                    *countConsonants+= 1;
                    break;
            }
        }
    }

}


void print_2d_array(int rows, int cols, char arr[rows][cols]){
    for (int i = 0; i < rows; i++){             /* printing array loop*/

        for (int j = 0; j < cols; j++){
            printf("%3c", arr[i][j]);
        }
        printf("\n");
    }

}
