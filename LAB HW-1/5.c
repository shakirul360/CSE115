/* LAB HW - 1,
   done by Shakirul Islam Leeon
   student ID: 2111728642
*/

#include <stdio.h>
#include <math.h>

void value_table(int x);
int flag = 1;

int main(){
    int i, n1, n2, n3;
    printf("Enter Three numbers: ");

    scanf("%d %d %d", &n1, &n2, &n3);
    value_table(n1);
    flag = 0;
    value_table(n2);
    value_table(n3);

    return 0;
}

void value_table(int x){
    int x5 = pow(x,5) , x6 = pow(x,6), x65 = x6 - x5;
    if (flag == 1){
        printf("-----------------------------------------------------\n"); //53 underscores;
        printf("| Value, x  |   x^5   | x^6 - x ^5 | sin(x^6 - x^5) |\n");
        printf("-----------------------------------------------------\n");
    }
    printf("|%c%5d%5c|%c%5d%3c|%3c%5d%4c|%4c%5.2f%7c|\n",' ', x, ' ', ' ', x5, ' ', ' ', x65, ' ', ' ', sin(x65), ' ');
    printf("-----------------------------------------------------\n");
}
