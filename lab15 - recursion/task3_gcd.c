/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
int gcd(int a, int b);

int main(){
    int a = 84, b = 24, res;
    res = gcd(a, b);
    printf("GCD of %d and %d is %d\n", a, b, res);
    return 0;
}

int gcd(int a, int b){
    if (a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}
