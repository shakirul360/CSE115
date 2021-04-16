/* LAB HW - 1,
   done by Shakirul Islam Leeon
   student ID: 2111728642
*/

#include <stdio.h>

void printPattern(int n);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printPattern(n);
    return 0;
}

void printPattern(int n){
    int i, j, space = n - 1, num = 1;

    for (i = 1; i <= n; i++){

        for (j = 1; j <= space; j++){
            printf(" ");
        }

        for (j = 1; j <= i; j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
        space--;
    }

}
