/* Done by Shakirul Islam leeon
    student ID - 2111728642
    Program that finds the maximum number of three numbers
*/

#include <stdio.h>
void max_finder(int a, int b, int c, int *max);

int main(){
    int a, b, c, max;
    printf("Enter three numbers seperated by a space: ");
    scanf("%d %d %d", &a, &b, &c);
    max_finder(a, b, c, &max);
    printf("Maximum of the three numbers is %d\n", max);
    return 0;
}

void max_finder(int a, int b, int c, int *max){
    if (a > b && a > c)
        *max = a;
    else if (b > a && b > c)
        *max = b;
    else
        *max = c;
}

/* 6 permutations of numbers

    1 2 3
    1 3 2
    2 1 3
    2 3 1
    3 2 1
    3 1 2

*/
