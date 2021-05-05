/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
int sum_digits(int n);

int main(){
    int n = 5535;
    int res;
    res = sum_digits(n);
    printf("The sum of digits in %d is %d\n", n, res);
    return 0;
}
int sum_digits(int n){

    if (n == 0)
        return;
    else{
       return (n % 10) + sum_digits(n / 10);
    }
}
