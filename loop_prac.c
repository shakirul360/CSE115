/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>

int main(){
    int i,j, rows = 5, cols = 5;

    for (i = 1; i <= rows; i++){

        for (j = cols; j > cols - i; j--){
            printf("%d", j);
        }

        for(j=1; j <= cols - i; j++)
        {
            printf("%d", (rows - i + 1));
        }

        printf("\n");
    }
    return 0;
}
