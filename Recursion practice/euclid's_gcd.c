/* Done by Shakirul Islam leeon
    student ID - 2111728642
*/

#include <stdio.h>
int gcd(int m, int n);

int main(){
    int n1 = 24, n2 = 84, g_c_d;
    g_c_d = gcd(n1, n2);
    printf("GCD = %d\n", g_c_d);
    g_c_d = gcd(n2, n1);
    printf("GCD = %d\n", g_c_d);
    return 0;
}

int gcd(int m, int n){
    int ans;

    if (m % n == 0)
        ans = n;
    else
        ans = gcd(n, m % n);

    return ans;
}
