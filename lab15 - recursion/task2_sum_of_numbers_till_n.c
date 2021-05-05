/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
int sum_natural(int x);

int main(){
    int n, res;
    printf("Enter a number to count its sum till the number: ");
    scanf("%d", &n);
    res = sum_natural(n);
    printf("Sum of numbers till n is %d\n", res);
    return 0;
}

int sum_natural(int x){
    if (x == 1)
        return 1;
    else
        return x + sum_natural(x - 1);
}
